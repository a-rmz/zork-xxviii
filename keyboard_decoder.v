`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:      Alejandro Ramírez Pérez
//
// Create Date:    12:08:19 04/14/2016
// Design Name:
// Module Name:    keyboard_decoder
// Project Name:
// Target Devices:
// Tool versions:
// Description:     Logical part of the keyboard decoder, which outputs the
// hex value of the pushed key.
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////

module keyboard_decoder (
  input clk_50MHz_i,
  input rst_async_la_i,
  input [3:0] columns,
  output [3:0] key_o,
  output [3:0] rows_o,
  output one_shot_o
  );

  wire key_ready;            // debouncer's one_shot output
  wire [3:0] key;            // key value from the key_decoder
  wire [1:0] rows;           // row count before one cold
  wire [3:0] rows_one_cold;  // row count after one cold
  wire key_flag;             // sw_noisy input of the debouncer
  wire counter_enabled;      // enable signal for the row_counter
  wire counter_compare;      // enable signal out of the comparator

  // row input nand
  assign key_flag = ~(columns[0] & columns[1] & columns[2] & columns[3]);

  debouncer dbncr (
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
    .sw_noisy(key_flag),
    .one_shot_o(key_ready)
  );

  assign one_shot_o = (key_ready);


  mod_n #(.DW(22), .N(2500000)) comparator (
    .enable_i(1'b1),
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
	  .enable_o(counter_compare),
    .count_o()
  );

  // enable signal for the row_counter
  assign counter_enabled = (counter_compare & (~key_flag));


  mod_n #(.DW(2), .N(4)) row_counter (
    .enable_i(counter_enabled),
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
	  .enable_o(), // Tied to ground
    .count_o(rows)
  );

  // Transforms the row_counter output to one cold
  one_cold row_decoder (
    .in(rows),
    .out(rows_one_cold)
  );

  // row output assign
  assign rows_o = rows_one_cold;

  // ROM with values for each key
  key_decoder decoder(
    .rows(rows_one_cold),
    .columns(columns),
    .key(key)
  );

  // Stores the pressed key until it has been decoded
  PIPO #(.DW(4)) register (
    .D_i(key),
		.Enable_i(key_ready),
		.preset_async_ha_i(1'b0),
		.clk_50MHz_i(clk_50MHz_i),
		.rst_async_la_i(rst_async_la_i),
		.Q_o(key_o)
  );


endmodule
