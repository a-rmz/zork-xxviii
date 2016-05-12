`timescale 1ns / 1ps

module zork_game_test;

	// Inputs
	reg clk_50MHz_i;
	reg rst_async_la_i;
	reg [3:0] columns_i;

	// Outputs
	wire [3:0] rows_o;
	wire vga_hsync;
	wire vga_vsync;
	wire [2:0] r_o;
	wire [2:0] g_o;
	wire [1:0] b_o;

	// Instantiate the Unit Under Test (UUT)
	zork uut (
		.clk_50MHz_i(clk_50MHz_i), 
		.rst_async_la_i(rst_async_la_i), 
		.columns_i(columns_i), 
		.rows_o(rows_o), 
		.vga_hsync(vga_hsync), 
		.vga_vsync(vga_vsync), 
		.r_o(r_o), 
		.g_o(g_o), 
		.b_o(b_o)
	);

	initial begin
		// Initialize Inputs
		clk_50MHz_i = 0;
		rst_async_la_i = 1;
		columns_i = 0;
		
		//Mandamos rst para que no haya problemas
		#1500 rst_async_la_i = 0;
		#1500 rst_async_la_i = 1;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
	begin
	#1 clk_50MHz_i = ~clk_50MHz_i;
	end
      
endmodule

