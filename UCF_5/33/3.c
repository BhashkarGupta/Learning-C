// Write a program to print the transpose of a given matrix.
#include<stdio.h>

void PrintMatrix(int matrix[3][3], int col, int row) {
    for (int c = 0; c < col; c++) {
        for (int r = 0; r < row; r++) {
            printf("%d ", matrix[c][r]);
        }
        printf("\n");
    }
    printf("\n");
}

void TransposeMatrix(int matrix[2][3], int Tmatrix[3][2], int col, int row){
    for(int c=0; c<col; c++){
        for(int r=0; r<row; r++){
            Tmatrix[r][c] = matrix[c][r];
        }
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int Tmatrix[3][2];
    printf("Original Matrix:\n");
    PrintMatrix(matrix, 2, 3);
    TransposeMatrix(matrix, Tmatrix, 2, 3);
    printf("Transposed Matrix:\n");
    PrintMatrix(Tmatrix, 3, 2);
    
    return 0;
}
