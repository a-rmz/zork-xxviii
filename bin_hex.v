`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:37 02/18/2016 
// Design Name: 
// Module Name:    bin_hex 
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
module bin_hex(
    input  		[3:0] in,
    output reg [6:0] segments
    );
	 	 
	 always@(*)
	 begin
		case(in)
			0: 	segments = 7'b000_0001; // 0
			1: 	segments = 7'b100_1111; // 1
			2: 	segments = 7'b001_0010; // 2
			3: 	segments = 7'b000_0110; // 3
			4: 	segments = 7'b100_1100; // 4
			5: 	segments = 7'b010_0100; // 5
			6: 	segments = 7'b010_0000; // 6
			7: 	segments = 7'b000_1110; // 7
			8: 	segments = 7'b000_0000; // 8
			9:		segments = 7'b000_0100; // 9
			10:	segments = 7'b000_1000; // A
			11:	segments = 7'b110_0000; // b
			12:	segments = 7'b011_0001; // C
			13:	segments = 7'b100_0010; // d
			14:	segments = 7'b011_0000; // E
			15:	segments = 7'b011_1000; // F
		endcase
	 end
	 
endmodule
