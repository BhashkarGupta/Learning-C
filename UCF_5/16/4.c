// Write a program to check whether a given number is an Armstrong number or not 
#include<stdio.h>
int main(){
    int userInput, temp, sum = 0, temp1, temp2, digitCounter = 1;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    temp = userInput;
    while (temp / 10 != 0)
    {
        digitCounter++;
        temp /= 10;
    }
    // printf("%d\n", digitCounter);
    temp = userInput;
    for (int i = 0; i < digitCounter; i++)
    {
        temp1 = temp % 10;
        temp = temp / 10;
        temp2 = 1;
        // printf("%d %d\n", temp1, temp);
        for (int i = 0; i < digitCounter; i++)
        {
            temp2 *= temp1;
        }
        sum += temp2;
        // printf("%d-%d\n", temp2, sum);
    }

    if (userInput == sum)
    {
        printf("%d is a Armstrong number\n", userInput);
    } else {
        printf("%d is not a Armstrong number\n", userInput);
    }
    
    return 0;
}