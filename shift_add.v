`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:25 02/23/2016 
// Design Name: 
// Module Name:    shift_add 
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
module shift_add(
    input [3:0] in,
    output reg [3:0] out
    );
	 
	 always@(*)
	 begin
		case(in)
			0: out = 4'b0000;
			1: out = 4'b0001;
			2: out = 4'b0010;
			3: out = 4'b0011;
			4: out = 4'b0100;
			5: out = 4'b1000;
			6: out = 4'b1001;
			7: out = 4'b1010;
			8: out = 4'b1011;
			default: out = 4'b1100;
		endcase
	 end

endmodule
