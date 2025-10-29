module subtractor #(parameter N = 4) (
    input  logic [N-1:0] a_i,  // First input vector
    input  logic [N-1:0] b_i,  // Second input vector
    output logic [N-1:0] diff,  // difference output = A ^ B ^ C  
    output logic sign
);

/* verilator lint_off UNOPTFLAT */
    logic [N:0] carry_int; // Internal carry chain (N+1 bits)
/* verilator lint_on UNOPTFLAT */
    logic [N-1:0] b_iComp;
    assign b_iComp = ~b_i;
    assign carry_int[0] = 1'b0; 
    logic [N-1:0]sum;
    genvar i;
    generate
        for (i = 0; i < N; i++) begin
            assign sum[i]       = a_i[i] ^ b_iComp[i] ^ carry_int[i];
            assign carry_int[i+1] = (a_i[i] & b_iComp[i]) | 
                                    (a_i[i] & carry_int[i]) | 
                                    (b_iComp[i] & carry_int[i]);
        end
    endgenerate

/* verilator lint_off UNOPTFLAT */
    logic [N:0] carry_int2; 
/* verilator lint_on UNOPTFLAT */

    assign carry_int2[0] = 1'b0; 
    logic [N-1:0] one = { {(N-1){1'b0}}, 1'b1 };  // Highest N-1 bits=0, LSB=1
    genvar j;

    generate
        for (j = 0; j < N; j++) begin
            assign diff[j]       = sum[j] ^ one[j] ^ carry_int2[j];
            assign carry_int2[j+1] = (sum[j] & one[j]) | 
                                    (sum[j] & carry_int2[j]) | 
                                    (one[j] & carry_int2[j]);
        end
    endgenerate

    assign sign = sum[N-1];
endmodule

//alternate solution

// module subtractor #(parameter N = 4) (
//     input  logic [N-1:0] a,
//     input  logic [N-1:0] b,
//     output logic [N-1:0] diff,
//     output logic sign
// );

//     logic signed [N:0] diff_extended;

//     // Perform subtraction with sign extension
//     assign diff_extended = $signed({1'b0, a}) - $signed({1'b0, b});
//     assign diff = diff_extended[N-1:0];
//     assign sign = diff_extended[N];

// endmodule
