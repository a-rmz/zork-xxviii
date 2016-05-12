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
  output [7:0] address
    );

  localparam  [3:0] grid_max = 15;
  localparam  [2:0] UP = 3'b000, DOWN = 3'b001, RIGHT = 3'b010, LEFT = 3'b011, NONE = 3'b100;


  reg [3:0] posx, posy;         // Positions that will be used to determine the address
  reg [3:0] new_posx, new_posy; // Positions modified by the movement
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
    // Off-bounds -> bottom (X, 15)
    (dir == DOWN && posy < grid_max) |
    // Off-bounds -> left (0, X)
    (dir == LEFT && posx > 0) |
    // Off-bounds -> right (15, X)
    (dir == RIGHT && posx < grid_max)
  );

  // If the movement is valid, the player moves according to the direction
  // given by the key pressed
  always @ ( * ) begin
    case( { valid_move, dir } )
    {1'b1, UP}:
      begin
        new_posy <= posy - 1;
        new_posx <= posx;
      end
    {1'b1, RIGHT}:
      begin
        new_posx <= posx + 1;
        new_posy <= posy;
      end
    {1'b1, DOWN}:
      begin
        new_posy <= posy + 1;
        new_posx <= posx;
      end
    {1'b1, LEFT}:
      begin
        new_posx <= posx - 1;
        new_posy <= posy;
      end
    default:
      begin
        new_posx <= posx;
        new_posy <= posy;
      end
    endcase
  end

  // When the game is reseted, the player starts at the center of the grid,
  // at coordinates (7, 7).
  // Otherwise, the current positions are assigned according to the movements
  // realised
  always @ (posedge clk_50MHz_i, negedge rst_async_la_i ) begin
    if(!rst_async_la_i)
      begin
        posx <= 4'h7;
        posy <= 4'h7;
      end
    else
      begin
        posx <= new_posx;
        posy <= new_posy;
      end
  end

  // The addres is determined by the concatenation of both coordinates
  // TODO will change (hope so)
  assign address = { posx, posy };

  endmodule
