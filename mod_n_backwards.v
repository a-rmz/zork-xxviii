`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:      Alejandro Ramírez Pérez
//
// Create Date:    10:31:33 03/31/2016
// Design Name:
// Module Name:    mod_n
// Project Name:
// Target Devices:
// Tool versions:
// Description:    Mod-n counter.
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module mod_n_backwards
#(parameter DW=4, N=10)
(
    input enable_i,
    input clk_50MHz_i,
    input rst_async_la_i,
	  output enable_o,
    output reg [DW-1:0] count_o
    );

	 reg [DW-1:0] input_reg_PIPO;
	 reg comparator_o;

   // Enables the output when the comparator reaches the count
	 assign enable_o = comparator_o & enable_i;

   // Counts as long as the count is smaller than the expected N
	 always@*
	 begin
		comparator_o <= (count_o == 0);
		if(comparator_o)
			input_reg_PIPO <= {DW{1'b0}};
		else
			input_reg_PIPO <= count_o - 1'b1;
	 end

  // Outputs the count
	always@(posedge clk_50MHz_i, negedge rst_async_la_i)
	 begin
		if(!rst_async_la_i)
			count_o <= N-1;
		else if(enable_i)
			count_o <= input_reg_PIPO;
	 end

endmodule
