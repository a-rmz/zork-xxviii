`timescale 1ns / 1ps

module FSM_Discover_Key(
	input clk_50MHz_i,
	input rst_async_la_i,
	input [3:0] posx,
	input [3:0] posy,
	input enable_move,
	output reg can_access_key
);

localparam IDLE = 2'b00, STEP_COUNT = 2'b01, OPEN_WALL = 2'b10;

reg [1:0] actual_state;
reg [1:0] next_state;

reg clk_posedge;

wire enable_out_step_counter;


//retroalimented combinational circuit
always@(*)
begin

	case(actual_state)
	
	IDLE:
	begin
	if(posx == 4'd1 && posy == 4'd6)
		next_state <= STEP_COUNT;
	else
		next_state <= IDLE;
	end
	
	STEP_COUNT:
	begin
	if(enable_out_step_counter)
		next_state <= STEP_COUNT;
	else
		next_state <= OPEN_WALL;
	end
	
	OPEN_WALL:
	begin
	if(clk_posedge)
		next_state <= IDLE;
	else
		next_state <= OPEN_WALL;
	end
	
	default: next_state <= IDLE;
	
	endcase
end


//Secuential circuit (flip flops)
always@(posedge clk_50MHz_i, negedge rst_async_la_i)
begin

if(!rst_async_la_i)
	actual_state <= IDLE;
else
	actual_state <= next_state;	
end


//Combinational exit circuit
always@(*)
begin

	case(actual_state)
	
	IDLE:
	begin
	can_access_key <= 1'b0;	
	end
	
	STEP_COUNT:
	begin
	can_access_key <= 1'b0;
	end
	
	OPEN_WALL:
	begin
	can_access_key <= 1'b1;
	end
	
	default:
	begin
	can_access_key <= 1'b0;
	end
	
	endcase
end


//Step counter, will count two steps to the west
mod_n 
#(.DW(2), .N(2))
step_counter(
    .enable_i(enable_move),
    .clk_50MHz_i(clk_50MHz_i),
    .rst_async_la_i(rst_async_la_i),
	  .enable_o(enable_out_step_counter),
    .count_o()//not needed
    );













