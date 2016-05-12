`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:		 Alejandro Ramírez Pérez
//
// Create Date:    10:51:24 03/29/2016
// Design Name:	 REGISTER PARALLEL-IN PARALLEL-OUT
// Module Name:    PIPO
// Project Name: 	 PIPO REGISTER
// Target Devices:
// Tool versions:
// Description: Shift register with parallel-in parallel-out (n-bit input, n-bit output).
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module PIPO
#(parameter DW = 4)
	(
	input [DW-1:0] D_i,
	input Enable_i,
	input clk_50MHz_i,
	input rst_async_la_i,
	input preset_async_ha_i,
	output reg [DW-1:0] Q_o
    );

	 always@(posedge clk_50MHz_i, negedge rst_async_la_i, posedge preset_async_ha_i)
	 if(!rst_async_la_i)
		Q_o <= {DW{1'b0}};
	 else if(preset_async_ha_i)
		Q_o <= {DW{1'b1}};
	 else if(Enable_i)
		Q_o <= D_i;


endmodule
