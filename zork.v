`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    17:41:49 05/09/2016
// Design Name:
// Module Name:    zork
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
module zork(
  input clk_50MHz_i,
  input rst_async_la_i,
  input [3:0] columns_i,
  output [3:0] rows_o,

  //VGA
  output vga_hsync,
  output vga_vsync,
  output [2:0] r_o,
  output [2:0] g_o,
  output [1:0] b_o,

  // DISPLAY
  output [6:0] segments,
  output [3:0] transistors

    );

  wire [4:0] control_address;

  wire [3:0] key_pressed, key_out;
  wire enable_move;

  keyboard_decoder gamepad (
    .clk_50MHz_i( clk_50MHz_i ),
    .rst_async_la_i( rst_async_la_i ),
    .columns(columns_i ),
    .key_o( key_pressed) ,
    .rows_o( rows_o ),
    .one_shot_o( enable_move )
  );

  game_control movement (
    .rst_async_la_i( rst_async_la_i ),
    .clk_50MHz_i( clk_50MHz_i ),
    .key_in( key_pressed ),
    .enable_move( enable_move ),
    .address( control_address )
  );

  // LABYRYNTH CONTROL

  wire [7:0] char_ascii;
  wire [9:0] vga_x, vga_y;
  wire phrase_ended;

	(* box_type = "user_black_box" *)
  labyrinth_ram ram(
    .clka(clk_50MHz_i),
    .wea(1'b0),
    .addra({ control_address, vga_y[5:4], vga_x[8:3] }),
    .douta(char_ascii)
  );

  // labyrinth_rom labyrinth_rom (
  //   .player_pos( control_address ),
  //   .screen_pos( { vga_y[5:4], vga_x[8:3] } ),
  //   .char_ascii(char_ascii)
  // );


  // VGA
  vga_control #( .WIDTH(10'd511), .HEIGHT(10'd64) ) vga_control (
	.clk_50( clk_50MHz_i ),
	.rst( rst_async_la_i ),
  .disable_print(phrase_ended),
	.pixel_column(vga_x),       // Column pixel counter
	.pixel_row(vga_y),     			// Row pixel counter
	.horiz_sync_out(vga_hsync),	// Horizontal Sync output, to VGA connector
	.vert_sync_out(vga_vsync)   // Vertical Sync output, to VGA connector
  );

  image_driver image_driver (
    .vga_x( vga_x[2:0] ),
    .vga_y( vga_y[3:0] ),
    .char_ascii( char_ascii ),
    .pix_to_display( pix_to_display )
  );

  multiplexed_display navigation (
    .rst_async_la_i( ~rst_async_la_i ),
    .clk_50MHz_i( clk_50MHz_i ),
    .Ain( 4'b0 ),
    .Bin( 4'b0 ),
    .Cin( { 1'b0, control_address[4:3] } ),
    .Din( { 2'b00, control_address[2:0] } ),
    .segments( segments ),
    .T( transistors )
  );

  assign r_o = { 3 { pix_to_display & phrase_ended } };
  assign g_o = { 3 { pix_to_display & phrase_ended } };
  assign b_o = { 2 { pix_to_display & phrase_ended } };


endmodule
