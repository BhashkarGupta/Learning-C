// Write a program to print MySirG N times on the screen
#include<stdio.h>
int main(){
    int userInput, var = 1;
    printf("Please enter the number of time MySirG needs to be printed: ");
    scanf("%d", &userInput);
    while (var <= userInput)
    {
        printf("MySirG\n");
        var ++;
    }
    return 0;
}