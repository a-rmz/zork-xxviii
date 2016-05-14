`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:		Alejandro Ramírez Pérez
//
// Create Date:    11:19:07 03/30/2016
// Design Name:	 REGISTER SERIAL-IN SERIAL-OUT
// Module Name:    SISO
// Project Name:	 SISO REGISTER
// Target Devices:
// Tool versions:
// Description: Shift register with serial-in serial-out (1-bit input, 1-bit output).
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module SISO
#(parameter DW=4)
(
		input D_i,
		input Enable_i,
		input clk_50MHz_i,
		input rst_async_la_i,
		output Q_o
	 );

	 reg [DW-1:0] internal_Q_o;

	 // assigns the last bit of the FF-D array to the output
	 assign Q_o = internal_Q_o[DW-1];

	 always@(posedge clk_50MHz_i, negedge rst_async_la_i)
	 if(!rst_async_la_i)
		 // cleans the output
		 internal_Q_o <= {DW{1'b0}};
	 else if(Enable_i)
		 // displaces the data
		 internal_Q_o <= {{internal_Q_o[DW-2:0], D_i}};


endmodule
