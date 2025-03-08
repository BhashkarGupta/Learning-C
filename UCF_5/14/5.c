// Write a program to reverse a given number
#include<stdio.h>
int main(){
    int userInput, reverseNumber = 0, temp, digitMultiplier = 1;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    temp = userInput;
    while(userInput / digitMultiplier > 10)
    {
     digitMultiplier *= 10;
    }
    while(digitMultiplier != 0)
    {
        reverseNumber += (temp % 10) * digitMultiplier;
     digitMultiplier /= 10;
        temp /= 10;
    }
    printf("%d\n", reverseNumber);
    return 0;
}