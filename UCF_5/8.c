// Write a program to calculate square of a given number. Number is entered by the user.
#include<stdio.h>
int main(){
    int num;
    printf("Please enter the number for square: ");
    scanf("%d", &num);
    printf("The sqare of the given number is: %d", num * num);
    return 0;
}