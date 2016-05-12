`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   12:11:58 05/12/2016
// Design Name:   vga_control
// Module Name:   /home/alex/ISE/Projects/zork/tb_vga.v
// Project Name:  zork
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: vga_control
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module tb_vga;

	// Inputs
	reg clk_50;
	reg rst;

	// Outputs
	wire [9:0] pixel_column;
	wire [9:0] pixel_row;
	wire horiz_sync_out;
	wire vert_sync_out;

	// Instantiate the Unit Under Test (UUT)
	vga_control uut (
		.clk_50(clk_50),
		.rst(rst),
		.pixel_column(pixel_column),
		.pixel_row(pixel_row),
		.horiz_sync_out(horiz_sync_out),
		.vert_sync_out(vert_sync_out)
	);

	initial begin
		// Initialize Inputs
		clk_50 = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
		#10 rst = 0;
		#10 rst = 1;

		// Add stimulus here

	end

	always
	begin
		#1 clk_50 <= ~clk_50;
	end

endmodule
