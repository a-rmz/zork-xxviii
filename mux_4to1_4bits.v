`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:37:36 02/18/2016 
// Design Name: 
// Module Name:    mux_4to1_4bits 
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
module mux_4to1_4bits(
		input      [3:0] a,
		input      [3:0] b,
		input      [3:0] c,
		input  	  [3:0] d,
		input		  [1:0] s,
		output reg [3:0] y
    );
	 
	 always@(*)
	 begin
		case(s)
			0:	y = a;
			1: y = b;
			2: y = c;
			default: y = d;
		endcase
	 end


endmodule
