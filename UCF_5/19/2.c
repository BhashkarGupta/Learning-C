// Write a menu driven program with the following options:
// Addition
// Subtraction
// Multiplication
// Division
// Exit
#include<stdio.h>
#include<stdlib.h>
int main(){
    int userInput1, userInput2, operation;
    printf("Please enter two numbers for the mathematic operation: ");
    scanf("%d %d", &userInput1, &userInput2);
    while(1){
        printf("\nPlease select the Opeartion number:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d", &operation);
        switch(operation){
            case 1:
            printf("The sum of the number %d and %d is %d\n", userInput1, userInput2, userInput1 + userInput2);
            break;
    
            case 2:
            printf("The difference of the number %d and %d is %d\n", userInput1, userInput2, userInput1 - userInput2);
            break;
    
            case 3:
            printf("The product of the number %d and %d is %d\n", userInput1, userInput2, userInput1 * userInput2);
            break;
    
            case 4:
            printf("The division of the number %d by %d is %0.2f\n", userInput1, userInput2, (float)userInput1 / userInput2);
            break;
    
            case 5:
            exit(1);
        }
    }
    return 0;
}