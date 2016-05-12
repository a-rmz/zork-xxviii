`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    17:56:51 02/09/2016
// Design Name:
// Module Name:    bin_to_hex
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
module bin_to_hex(
	// inputs
	input w,
	input x,
	input y,
	input z,

	//Outputs
	output [6:0] segments,
	output [3:0]T
    );

		// wires
		wire a;
		wire b;
		wire c;
		wire d;
		wire e;
		wire f;
		wire g;

	 // segment assignation
	 assign a = (~(w | y) & (x ^ z)) | (w & z & (x ^ y));
	 assign b = (~w & x & (y ^ z)) |(w & ((y&z) | (x&~z)));
	 assign c = (w & x & ~(y ^ z)) | (y & ~z & ~(w ^ x));
	 assign d = (~w & x & ~(y ^ z)) | (~w & ~y & (x ^ z)) | (w & y & ~(x  ^ z));
	 assign e = (~w & z) | (~y & z & (w ^ x)) | (~w & ~y & (x ^ z));
	 assign f = (~w & ~x & (y | z)) | (x & z & (w ^ y));
	 assign g = (~y & ~z & ~(w ^ x)) | (~w & ~x & ~y);

	 assign segments = {a, b, c, d, e, f, g};
	 // transistor assignation
	 assign T = 'b1110;

endmodule
