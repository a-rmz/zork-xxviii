`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    10:16:20 04/12/2016
// Design Name:
// Module Name:    fsm
// Project Name:
// Target Devices:
// Tool versions:
// Description:    Finite State Machine that controls the state of the debouncer
// circuit.
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module fsm(
  input clk_50MHz_i,
  input rst_async_la_i,
  input to_30ms_i,
  input sw_noisy,
  output reg one_shot_o,
  output reg enable_cnt_o,
  output reg sw_clean
  );

  // Constant values for each state
  localparam  IDLE = 2'b00, DLY1 = 2'b01, HALT = 2'b10, DLY2 = 2'b11;

  reg [1:0] actual_state, next_state;


  // Feedback sequential circuit
  // FSM state transition
  always @ ( * )
  begin
    case(actual_state)
      IDLE:
        if(sw_noisy == 1'b0)
          next_state <= IDLE;
        else
          next_state <= DLY1;
      DLY1:
        if(to_30ms_i == 1'b0)
          next_state <= DLY1;
        else
          next_state <= HALT;
      HALT:
        if(sw_noisy == 1'b0)
          next_state <= DLY2;
        else
          next_state <= HALT;
      DLY2:
        if(to_30ms_i == 1'b0)
          next_state <= DLY2;
        else
          next_state <= IDLE;
      default:
        next_state <= IDLE;
    endcase
  end


  // Sequential circuit
  // Current state assignment
  always @ ( posedge clk_50MHz_i, negedge rst_async_la_i )
  begin
    if(!rst_async_la_i)
      actual_state <= IDLE;
    else
      actual_state <= next_state;
  end


  // Output combinational circuit
  // State outputs
  always @ ( * )
  begin
    case(actual_state)
      IDLE:
        begin
        sw_clean <= 1'b0;
        one_shot_o <= 1'b0;
        enable_cnt_o <= 1'b0;
        end
      DLY1:
        begin
        sw_clean <= 1'b0;
        one_shot_o <= to_30ms_i;
        enable_cnt_o <= 1'b1;
        end
      HALT:
        begin
        sw_clean <= 1'b1;
        one_shot_o <= 1'b0;
        enable_cnt_o <= 1'b0;
        end
      DLY2:
        begin
        sw_clean <= 1'b1;
        one_shot_o <= 1'b0;
        enable_cnt_o <= 1'b1;
        end
      default:
        begin
        sw_clean <= 1'b0;
        one_shot_o <= 1'b0;
        enable_cnt_o <= 1'b0;
        end
    endcase
  end


endmodule
