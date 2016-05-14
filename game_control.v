`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:       Instituto Tecnológico y de Estudios Superiores de Occidente A.C.
// Engineer:      Alejandro Ramírez Pérez & G. Adrián Toscano Prieto
//
// Create Date:    10:04:30 05/10/2016
// Design Name:
// Module Name:    game_control
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module game_control(
  input clk_50MHz_i,
  input rst_async_la_i,
  input [3:0] key_in,
  input enable_move,
  output [4:0] address
    );

  localparam  [3:0] grid_max_x = 7;
  localparam  [3:0] grid_max_y = 3;
  localparam  [2:0] UP = 3'b000, DOWN = 3'b111, RIGHT = 3'b101, LEFT = 3'b010, NONE = 3'b100;


  reg [2:0] posx;               // Positions that will be used to determine the address
  reg [1:0] posy;               // Positions that will be used to determine the address
  wire [2:0] new_posx;           // Positions modified by the movement
  wire [1:0] new_posy;           // Positions modified by the movement
  reg [2:0] dir;                // Direction of the movement
  reg enable_move_sync;         // Movement enable synchronized with the 50MHz clock
  wire valid_move;              // Validates off-bounds movements

  // Synchornizes the enable
  always @ (posedge clk_50MHz_i) begin
    enable_move_sync <= enable_move;
  end

  // Determines the direction of the movement
  always @ ( * ) begin
    case(key_in)
      4'h2: dir <= UP;
      4'h6: dir <= RIGHT;
      4'h8: dir <= DOWN;
      4'h4: dir <= LEFT;
      default: dir <= NONE;
    endcase
  end

  // Determines if the next movement is valid
  assign valid_move = enable_move_sync & (
    // Off-bounds -> top (X, 0)
    (dir == UP && posy > 0) |
    // Off-bounds -> bottom (X, 3)
    (dir == DOWN && posy < grid_max_y) |
    // Off-bounds -> left (0, X)
    (dir == LEFT && posx > 0) |
    // Off-bounds -> right (7, X)
    (dir == RIGHT && posx < grid_max_x)
  );

  // Verifies if the next movement is forbidden by the map design
  // If the movement is valid, the player moves according to the direction
  // given by the key pressed
  forbidden_moves forbidden_moves (
    .rst_async_la_i( rst_async_la_i ),
    .clk_50MHz_i( clk_50MHz_i ),
    .posx( posx ),
    .posy( posy ),
    .dir( dir ),
    .valid( valid_move ),
    .positionx( new_posx ),
    .positiony( new_posy )
  );

  // always @ ( * ) begin
  //   if(valid_move)
  //     new_posx <= positionx;
  //     new_posy <= positiony;
  //   else
  //     new_posx <= posx;
  //     new_posy <= posy;
  // end


  // When the game is reseted, the player starts at the right bottom of the grid,
  // at coordinates (3, 7).
  // Otherwise, the current positions are assigned according to the movements
  // realised
  always @ (posedge clk_50MHz_i, negedge rst_async_la_i ) begin
    if(!rst_async_la_i)
      begin
        posx <= grid_max_x;
        posy <= grid_max_y;
      end
    else
      begin
        posx <= new_posx;
        posy <= new_posy;
      end
  end

  // The addres is determined by the concatenation of both coordinates
  assign address = { posy, posx };

  endmodule
