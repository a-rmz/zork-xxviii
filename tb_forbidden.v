`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   14:40:54 05/14/2016
// Design Name:   forbidden_moves
// Module Name:   /home/alex/ISE/Projects/zork/tb_forbidden.v
// Project Name:  zork
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: forbidden_moves
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module tb_forbidden;

	// Inputs
	reg rst_async_la_i;
	reg clk_50MHz_i;
	reg [2:0] posx;
	reg [1:0] posy;
	reg [2:0] dir;
	reg valid;

	// Outputs
	wire [2:0] positionx;
	wire [1:0] positiony;

	localparam  [2:0] UP = 3'b000, DOWN = 3'b111, RIGHT = 3'b101, LEFT = 3'b010, NONE = 3'b100;

	// Instantiate the Unit Under Test (UUT)
	forbidden_moves uut (
		.rst_async_la_i(rst_async_la_i),
		.clk_50MHz_i(clk_50MHz_i),
		.posx(posx),
		.posy(posy),
		.dir(dir),
		.valid(valid),
		.positionx(positionx),
		.positiony(positiony)
	);

	initial begin
		// Initialize Inputs
		rst_async_la_i = 1;
		clk_50MHz_i = 0;
		posx = 3'h7;
		posy = 2'h3;
		dir = 0;
		valid = 1;

		// Wait 100 ns for global reset to finish
		#100;
		#10 rst_async_la_i = 0;
		#10 rst_async_la_i = 1;

		// Add stimulus here
		#1000 dir = LEFT;
		#10000;
		#1000
		posx = 3'h6;
		posy = 2'h3;
		#1000 dir = LEFT;
		#10000;
		#1000 dir = UP;
		#10000;
		#1000 dir = RIGHT;
		#10000;
		#1000 dir = LEFT;
	end
	always
	begin
		#1 clk_50MHz_i <= ~clk_50MHz_i;
	end

endmodule
