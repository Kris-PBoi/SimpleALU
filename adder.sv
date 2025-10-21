module adder #(parameter N = 4) (
    input  logic [N-1:0] a_i,  // First input vector
    input  logic [N-1:0] b_i,  // Second input vector
    output logic [N-1:0] sum,  // Sum output
    output logic         carry // Final carry output
);
/* verilator lint_off UNOPTFLAT */
    logic [N:0] carry_int; // Internal carry chain (N+1 bits)
/* verilator lint_on UNOPTFLAT */
    assign carry_int[0] = 1'b0; 

    genvar i;
    generate
        for (i = 0; i < N; i++) begin
            assign sum[i]       = a_i[i] ^ b_i[i] ^ carry_int[i];
            assign carry_int[i+1] = (a_i[i] & b_i[i]) | 
                                    (a_i[i] & carry_int[i]) | 
                                    (b_i[i] & carry_int[i]);
        end
    endgenerate

    assign carry = carry_int[N];

endmodule
