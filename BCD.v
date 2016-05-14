`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:16:30 02/23/2016 
// Design Name: 
// Module Name:    BCD 
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
module BCD(
    input [4:0] in,
    output [3:0] units,
    output [3:0] tens
    );
	 
	 wire [3:0] w_sa0_sa1, w_out;
	 
	 shift_add sa0 (
		.in({0, in[4:2]}),
		.out(w_sa0_sa1)
	 );
	 
	 shift_add sa1 (
		.in({w_sa0_sa1[2:0], in[1]}),
		.out(w_out)
	 );
	 
	 assign units = {w_out[2:0], in[0]};
	 assign tens = {2'b00, w_sa0_sa1[3], w_out[3]};

endmodule
