`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   10:36:10 05/10/2016
// Design Name:   game_control
// Module Name:   /home/alex/ISE/Projects/zork/tb_game_control.v
// Project Name:  zork
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: game_control
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module tb_game_control;
	// Inputs
	reg rst_async_ha_i;
	reg clk_50MHz_i;
	reg [3:0] movement;

	// Outputs
	wire [3:0] direction;

	// Instantiate the Unit Under Test (UUT)
	game_control uut (
		.rst_async_ha_i(rst_async_ha_i),
		.clk_50MHz_i(clk_50MHz_i),
		.movement(movement),
		.direction(direction)
	);

	initial begin
		// Initialize Inputs
		rst_async_ha_i = 0;
		clk_50MHz_i = 0;
		movement = 0;

		// Wait 100 ns for global reset to finish
		#10 rst_async_ha_i = 1;
		#5 rst_async_ha_i = 0;

		// Add stimulus here
		#20 movement = 4'h6;
		#1 movement = 4'h0;

		#20 movement = 4'h6;
		#1.5 movement = 4'h0;

		#20 movement = 4'h6;
		#1.5 movement = 4'h0;

	end

	always
	begin
		#1 clk_50MHz_i <= ~clk_50MHz_i;
	end

endmodule
