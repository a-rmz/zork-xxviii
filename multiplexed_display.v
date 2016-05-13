`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    09:33:34 02/18/2016
// Design Name:
// Module Name:    multiplexed_display
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
module multiplexed_display(
    input rst_async_la_i,
    input clk_50MHz_i,
    input  [3:0] Ain,
    input  [3:0] Bin,
    input  [3:0] Cin,
    input  [3:0] Din,
    output [6:0] segments,
    output [3:0] T
    );

	 wire [3:0] w_mux_deco;
	 wire [7:0] w_count;

	 mux_4to1_4bits mux (
		.a(Ain),
		.b(Bin),
		.c(Cin),
		.d(Din),
		.s(w_count[1:0]),
		.y(w_mux_deco)
	 );


	 bin_hex decoder (
		.in(w_mux_deco),
		.segments(segments)
	 );


	 soft_gtv gtv (
		.rst(rst_async_la_i),
		.clk(clk_50MHz_i),
		.mode(3'b001),
		.evnt(1'd0),
		.count(w_count)
	 );


	 one_cold oc (
		.in(w_count[1:0]),
		.out(T)
	 );


endmodule
