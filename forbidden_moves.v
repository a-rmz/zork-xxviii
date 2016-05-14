`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    17:58:12 05/13/2016
// Design Name:
// Module Name:    forbidden_moves
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
module forbidden_moves(
  input rst_async_la_i,
  input clk_50MHz_i,
  input [2:0] posx,
  input [1:0] posy,
  input [2:0] dir,
  input valid,
  output reg [2:0] positionx,
  output reg [1:0] positiony
    );

  localparam  [2:0] UP = 3'b000, DOWN = 3'b111, RIGHT = 3'b101, LEFT = 3'b010, NONE = 3'b100;

  reg [2:0] new_posx;
  reg [1:0] new_posy;
  reg valid_move;
  wire [2:0] last_direction;
  reg enable_move;

  // Validates if the new position is a forbidden position
  always @ ( * ) begin
    case ( { posy, posx } )
      {2'd0, 3'd3}: valid_move <= 1'b0;
      {2'd0, 3'd6}: valid_move <= 1'b0;
      {2'd1, 3'd4}: valid_move <= 1'b0;
      {2'd2, 3'd0}: valid_move <= 1'b0;
      {2'd2, 3'd2}: valid_move <= 1'b0;
      {2'd2, 3'd6}: valid_move <= 1'b0;
      {2'd3, 3'd2}: valid_move <= 1'b0;
      {2'd3, 3'd6}: valid_move <= 1'b0;
      default: valid_move <= 1'b1;
    endcase
  end

  PIPO #(.DW(3)) last_dir (
    .D_i( dir ),
    .Enable_i( !valid_move ),
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
    .preset_async_ha_i(1'b0),
    .Q_o(last_direction)
  );

  always @ ( * ) begin
    if( !valid_move )
      enable_move <= ( ~dir == last_direction ) & valid;
    else
      enable_move <= valid;
  end

  // Moves the player in the given direction
  always @ ( * ) begin
    case( { enable_move, dir } )
    { 1'b1, UP }:
      begin
        new_posy <= posy - 1;
        new_posx <= posx;
      end
    { 1'b1, RIGHT }:
      begin
        new_posx <= posx + 1;
        new_posy <= posy;
      end
    { 1'b1, DOWN }:
      begin
        new_posy <= posy + 1;
        new_posx <= posx;
      end
    { 1'b1, LEFT }:
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



  always @ ( * ) begin
    positionx <= new_posx;
    positiony <= new_posy;
  end




endmodule
