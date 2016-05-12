`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:38 02/18/2016 
// Design Name: 
// Module Name:    one_cold 
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
module one_cold(
    input 		[1:0] in,
    output reg [3:0] out
    );

	always@(*)
	begin
		case(in)
			0: out = 4'b1110;
			1: out = 4'b1101;
			2: out = 4'b1011;
			default: out = 4'b0111;
		endcase
	end

endmodule
