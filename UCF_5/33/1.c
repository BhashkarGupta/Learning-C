// Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>

void PrintMatrix(int matrix[3][3], int col, int row) {
    for (int c = 0; c < col; c++) {
        for (int r = 0; r < row; r++) {
            printf("%d ", matrix[c][r]);
        }
        printf("\n");
    }
    printf("\n");
}

void MatrixSum(int matrix1[3][3], int matrix2[3][3], int col, int row, int sum[3][3]) {
    for (int c = 0; c < col; c++) {
        for (int r = 0; r < row; r++) {
            sum[c][r] = matrix1[c][r] + matrix2[c][r];
        }
    }
}

int main() {
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];

    printf("Matrix 1:\n");
    PrintMatrix(matrix1, 3, 3);

    printf("Matrix 2:\n");
    PrintMatrix(matrix2, 3, 3);

    MatrixSum(matrix1, matrix2, 3, 3, sum);

    printf("Sum Matrix:\n");
    PrintMatrix(sum, 3, 3);

    return 0;
}
