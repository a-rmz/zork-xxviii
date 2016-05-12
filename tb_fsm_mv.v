`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   18:07:33 05/10/2016
// Design Name:   fsm_movement
// Module Name:   /home/alex/ISE/Projects/zork/tb_fsm_mv.v
// Project Name:  zork
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: fsm_movement
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module tb_fsm_mv;

	// Inputs
	reg clk_50MHz_i;
	reg rst_async_la_i;
	reg [3:0] key_in;
	reg last_key_in;
	reg valid_key;
	reg [1:0] valid_move;
	reg movement_direction;
	reg moved;
	reg enable_save_last;

	// Outputs
	wire enable_sum_PX;
	wire enable_sum_NX;
	wire enable_sum_PY;
	wire enable_sum_NY;
	wire enable_validation_key;
	wire enable_validation_move;
	wire enable_count_move;
	wire [3:0] last_pressed;

	// Instantiate the Unit Under Test (UUT)
	fsm_movement uut (
		.clk_50MHz_i(clk_50MHz_i),
		.rst_async_la_i(rst_async_la_i),
		.key_in(key_in),
		.last_key_in(last_key_in),
		.valid_key(valid_key),
		.valid_move(valid_move),
		.movement_direction(movement_direction),
		.moved(moved),
		.enable_save_last(enable_save_last),
		.enable_sum_PX(enable_sum_PX),
		.enable_sum_NX(enable_sum_NX),
		.enable_sum_PY(enable_sum_PY),
		.enable_sum_NY(enable_sum_NY),
		.enable_validation_key(enable_validation_key),
		.enable_validation_move(enable_validation_move),
		.enable_count_move(enable_count_move),
		.last_pressed(last_pressed)
	);

	initial begin
		// Initialize Inputs
		clk_50MHz_i = 0;
		rst_async_la_i = 1;
		key_in = 0;
		last_key_in = 0;
		valid_key = 0;
		valid_move = 0;
		movement_direction = 0;
		moved = 0;
		enable_save_last = 0;

		// Wait 100 ns for global reset to finish
		#10 rst_async_la_i = 0;
		#10 rst_async_la_i = 1;

		// Add stimulus here
		#30 key_in = 4'b1010;
		#5 last_key_in = 1'b1;
		#5 last_key_in = 1'b0;

		#20 key_in = 4'b0110;
		#5 last_key_in = 1'b1;
		#5 last_key_in = 1'b0;

	end

	always
	begin
		#1 clk_50MHz_i <= ~clk_50MHz_i;
	end

endmodule
