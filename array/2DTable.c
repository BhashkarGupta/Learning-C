// Create a 2D table and store and print the table
#include<stdio.h>

int main() {
    int userInput;

    printf("Please input the number up to which you want to print the table:\n");
    scanf("%d", &userInput);

    int table[userInput][10];

// Creating the table
    for (int i = 0; i < userInput; i++) {
        for (int j = 0; j < 10; j++) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }

// Printing the table
    for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < userInput; j++) {
            printf("%d\t", table[j][i]);
        }
    }

    printf("\n");
    return 0;
}
