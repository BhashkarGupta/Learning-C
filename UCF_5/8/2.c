// Write a program to print greater number between two numbers. Print one number if both the same. 
#include<stdio.h>
int main(){
    int userInput1, userInput2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    if (userInput1 >= userInput2){
        printf("Result: %d\n", userInput1);
    }else{
        printf("Result: %d\n", userInput2);
    }
    return 0;
}