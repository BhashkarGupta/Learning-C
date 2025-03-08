// Write a program to count digits in a given number
#include<stdio.h>
int main(){
    int userInput, temp, count = 0;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    temp = userInput;
    while (temp / 10 != 0)
    {
        temp = temp / 10;
        count += 1;
    }
    printf("The number of digits in %d is %d\n", userInput, count + 1);
    return 0;
}