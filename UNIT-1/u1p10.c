// Multiply two matrices.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Hardcoded 2x2 matrices for quick testing
    int A[2][2] = {{1, 2},
                   {3, 4}};
    int B[2][2] = {{5, 6},
                   {7, 8}};
    int C[2][2] = {{0, 0},
                   {0, 0}}; // Result matrix initialized to 0

    int i, j, k; // Declaring iterators at the top (good C89/C99 habit for university exams)

    // Matrix Multiplication Logic
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying the output
    printf("Resultant Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]); // \t keeps it aligned nicely
        }
        printf("\n");
    }

    return 0;
}
