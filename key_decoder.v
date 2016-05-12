`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:      Alejandro Ramírez Pérez
//
// Create Date:    11:56:44 04/14/2016
// Design Name:
// Module Name:    key_decoder
// Project Name:
// Target Devices:
// Tool versions:
// Description:   Decoder for the keyboard input. Transforms the rows and columns
// input into the corresponding value.
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module key_decoder(
    input [3:0] rows,
    input [3:0] columns,
    output reg [3:0] key
    );

  always @ ( * )
  begin
  case({rows, columns})
    8'b1110_1110: key <= 4'd1;
    8'b1110_1101: key <= 4'd2;
    8'b1110_1011: key <= 4'd3;
    8'b1110_0111: key <= 4'hA;

    8'b1101_1110: key <= 4'd4;
    8'b1101_1101: key <= 4'd5;
    8'b1101_1011: key <= 4'd6;
    8'b1101_0111: key <= 4'hB;

    8'b1011_1110: key <= 4'd7;
    8'b1011_1101: key <= 4'd8;
    8'b1011_1011: key <= 4'd9;
    8'b1011_0111: key <= 4'hC;

    8'b0111_1110: key <= 4'hE;
    8'b0111_1101: key <= 4'd0;
    8'b0111_1011: key <= 4'hF;
    8'b0111_0111: key <= 4'hD;
	 default:  key <= 4'd0;
  endcase
  end

endmodule
