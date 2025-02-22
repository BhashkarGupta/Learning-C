// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. 
#include<stdio.h>
int main(){
    int digit, num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Please enter a digit: ");
    scanf("%d", &digit);
    printf("Modified number: %d\n", (num * 10) + digit);
    return 0;
}