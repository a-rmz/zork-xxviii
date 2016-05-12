`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    12:10:30 05/11/2016
// Design Name:
// Module Name:    image_driver
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
module image_driver(
  input [2:0] vga_x,
  input [3:0] vga_y,
  input [7:0] char_ascii,
  output reg pix_to_display
    );

  wire [7:0] char_row;


  font_rom font (
    .ascii_i(char_ascii),
    .vga_y(vga_y),
    .pixels(char_row)
  );

  always @ ( * ) begin
    case(vga_x)
      4'h0: pix_to_display <= char_row[7];
      4'h1: pix_to_display <= char_row[6];
      4'h2: pix_to_display <= char_row[5];
      4'h3: pix_to_display <= char_row[4];
      4'h4: pix_to_display <= char_row[3];
      4'h5: pix_to_display <= char_row[2];
      4'h6: pix_to_display <= char_row[1];
      4'h7: pix_to_display <= char_row[0];
    endcase
  end

endmodule
