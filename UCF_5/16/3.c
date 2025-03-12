// Write a program to check whether a given number is there in the Fibonacci series or not. 
#include<stdio.h>
int main(){
    int userInput, temp, temp1 = 0, temp2 = 1, counter = 2, isPresetnt = 0;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    while(userInput >= temp2)
    {
        if(userInput == temp2){
            isPresetnt = 1;
            break;
        }
        temp = temp2;
        temp2 = temp1 + temp2;
        temp1 = temp;
        counter++;
    }
    if (isPresetnt == 1)
    {
        printf("The number %d is in Fabonacci series at %dth position\n", userInput, counter);
    } else {
        printf("The number %d is not in Fibonacci series\n", userInput);
    }
    return 0;
}