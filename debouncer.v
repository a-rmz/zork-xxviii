`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:      Alejandro Ramírez Pérez
//
// Create Date:    08:06:24 04/13/2016
// Design Name:
// Module Name:    debouncer
// Project Name:
// Target Devices:
// Tool versions:
// Description:   Debouncer circuit that eliminates de bouncing generated by
// physical input signals.
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module debouncer(
  input clk_50MHz_i,
  input rst_async_la_i,
  input sw_noisy,
  output one_shot_o
    );

  wire to_30ms_i;
  wire enable_cnt_30ms;

  // FSM instance
  fsm state_machine (
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
    .to_30ms_i(to_30ms_i),
    .sw_noisy(sw_noisy),
    .one_shot_o(one_shot_o),
    .enable_cnt_o(enable_cnt_30ms),
    .sw_clean()
    );

  // Delay counter
  // Counts until the 30ms-bounce-delay have elapsed
  mod_n #(.DW(21), .N(1500000)) dly_counter (
    .enable_i(enable_cnt_30ms),
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
    .enable_o(to_30ms_i)
    );


endmodule
