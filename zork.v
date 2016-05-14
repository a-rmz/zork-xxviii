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
  output [3:0] transistors,

  // LEDS
  output [7:0] has_key_o

    );

  wire [4:0] control_address, step_count;

  wire [3:0] key_pressed, key_out;
  wire enable_move, enable_key;
  wire [3:0] tens_to_disp, units_to_disp;
  wire out_of_steps;

  keyboard_decoder gamepad (
    .clk_50MHz_i( clk_50MHz_i ),
    .rst_async_la_i( rst_async_la_i ),
    .columns(columns_i ),
    .key_o( key_pressed) ,
    .rows_o( rows_o ),
    .one_shot_o( enable_key )
  );

  assign enable_move = ( enable_key & !out_of_steps );

  game_control movement (
    .rst_async_la_i( rst_async_la_i ),
    .clk_50MHz_i( clk_50MHz_i ),
    .key_in( key_pressed ),
    .enable_move( enable_move ),
    .address( control_address ),
    .out_of_steps( out_of_steps ),
    .step_count( step_count ),
    .in_key_pos( in_key_pos ),
    .in_exit_pos( in_exit_pos )
  );

  // GAME STATUS CONTROL
  wire red, green, blue;
  wire timeout_15s;
  wire enable_count_last;

  mod_n #(.DW( 27 ), .N( 75_000_000 )) last_message (
    .enable_i( enable_count_last ),
    .clk_50MHz_i( clk_50MHz_i ),
    .rst_async_la_i( rst_async_la_i ),
    .enable_o( timeout_15s )
  );

  fsm_game game_status (
    .clk_50MHz_i( clk_50MHz_i ),
    .rst_async_la_i( rst_async_la_i ),
    .in_key_pos( in_key_pos),
    .in_exit_pos( in_exit_pos ),
    .out_of_steps( out_of_steps ),
    .timeout_15s( timeout_15s ),
    .enable_count_last( enable_count_last ),
    .has_key_leds( has_key_leds ),
    .red( red ),
    .green( green),
    .blue( blue )
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

  BCD bcd (
    .in(step_count),
    .units(units_to_disp),
    .tens(tens_to_disp)
    );

  multiplexed_display navigation (
    .rst_async_la_i( ~rst_async_la_i ),
    .clk_50MHz_i( clk_50MHz_i ),
    .Ain( tens_to_disp),
    .Bin( units_to_disp),
    .Cin( { 1'b0, control_address[4:3] } ),
    .Din( { 2'b00, control_address[2:0] } ),
    .segments( segments ),
    .T( transistors )
  );

  assign r_o = { 3 { pix_to_display & phrase_ended & red } };
  assign g_o = { 3 { pix_to_display & phrase_ended & green } };
  assign b_o = { 2 { pix_to_display & phrase_ended & blue } };
  assign has_key_o = { 8 { has_key_leds } };



endmodule
