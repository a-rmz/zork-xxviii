`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:40:06 05/13/2016
// Design Name:
// Module Name:    fsm_game
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
module fsm_game (
  input clk_50MHz_i,
  input rst_async_la_i,
  input in_key_pos,
  input in_exit_pos,
  input out_of_steps,
  input timeout_15s,

  output reg enable_count_last,
  output reg has_key_leds,
  output reg red,
  output reg green,
  output reg blue
    );

  localparam [2:0] GAME = 3'b000, HAS_KEY = 3'b001, EXIT = 3'b010, GREEN = 3'b011, LOST = 3'b100;

  reg [2:0] actual_state, next_state;

  // Feedback sequential circuit
  // FSM state transition
  always @ ( * )
  begin
    case(actual_state)
      GAME:
        if(in_key_pos)
          next_state <= HAS_KEY;
        else if(out_of_steps)
          next_state <= LOST;
        else
          next_state <= GAME;

      HAS_KEY:
        if(in_exit_pos)
          next_state <= EXIT;
        else if(out_of_steps)
          next_state <= LOST;
        else
          next_state <= HAS_KEY;

      LOST:
        next_state <= LOST;

      EXIT:
        if(timeout_15s)
          next_state <= GREEN;
        else
          next_state <= EXIT;

      GREEN:
        next_state <= GREEN;
      default:
        next_state <= GAME;
    endcase
  end


  // Sequential circuit
  // Current state assignment
  always @ ( posedge clk_50MHz_i, negedge rst_async_la_i )
  begin
    if(!rst_async_la_i)
      actual_state <= GAME;
    else
      actual_state <= next_state;
  end


  // output reg combinational circuit
  // State outputs
  always @ ( * )
  begin
    case(actual_state)
    GAME:
      begin
        enable_count_last <= 1'b0;
        has_key_leds <= 1'b0;
        red <= 1'b1;
        green <= 1'b1;
        blue <= 1'b1;
      end
    HAS_KEY:
      begin
        enable_count_last <= 1'b0;
        has_key_leds <= 1'b1;
        red <= 1'b1;
        green <= 1'b1;
        blue <= 1'b1;
      end
    EXIT:
      begin
        enable_count_last <= 1'b1;
        has_key_leds <= 1'b1;
        red <= 1'b1;
        green <= 1'b1;
        blue <= 1'b1;
      end
    LOST:
      begin
        enable_count_last <= 1'b0;
        has_key_leds <= 1'b0;
        red <= 1'b1;
        green <= 1'b0;
        blue <= 1'b0;
      end

    GREEN:
      begin
        enable_count_last <= 1'b0;
        has_key_leds <= 1'b1;
        red <= 1'b0;
        green <= 1'b1;
        blue <= 1'b0;
      end
    endcase
  end

endmodule
