module Sequence_Detector
    (input     wire        clk,
    input     wire        reset,
    input     wire        x_i,    // Serial input

    output    wire        det_o);   // Output asserted when sequence is detected

