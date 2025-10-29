module leftShift #(parameter N = 4) (
    input  logic [N-1:0] a_i,  // First input vector
    input  logic [N-1:0] b_i,  // Second input vector
    output logic [N-1:0] outLeft
);
logic [2:0]shift;
assign shift = {b_i[2],b_i[1],b_i[0]};
assign outLeft = a_i <<< shift;
endmodule
