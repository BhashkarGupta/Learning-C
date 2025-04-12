// Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>

void PrintMatrix(int matrix[3][3], int size) {
    for (int c = 0; c < size; c++) {
        for (int r = 0; r < size; r++) {
            printf("%d ", matrix[c][r]);
        }
        printf("\n");
    }
    printf("\n");
}

void MatrixMultiplication(int matrix1[3][3], int matrix2[3][3], int size, int product[3][3]) {
    for (int c = 0; c < size; c++) {
        for (int r = 0; r < size; r++) {
            int result = 0;
            for(int i=0; i < size; i++){
                result += matrix1[c][i] * matrix2 [i][r];
            }
            product[c][r] = result;
        }
    }
}

int main() {
    int size = 3;
    int product[3][3];

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
    
    printf("Matrix 1:\n");
    PrintMatrix(matrix1, size);
    printf("Matrix 2:\n");
    PrintMatrix(matrix2, size);
    MatrixMultiplication(matrix1, matrix2, size, product);
    printf("Product of Matrix 1 and Matrix 2:\n");
    PrintMatrix(product, size);
    
    return 0;
}
