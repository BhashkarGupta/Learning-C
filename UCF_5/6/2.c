// Write a program to take a three digit number from the user and rotate its digits by one position towards the right. 
#include<stdio.h>
int main(){
    int userInput, temp1, temp2;
    printf("Please enter a 3 digit number: ");
    scanf("%d", &userInput);
    temp1 = userInput / 10;
    temp2 = userInput % 10;
    printf("Number %d after rotating it's digit by one position is %d\n", userInput, (temp2 * 100) + temp1);
    return 0;
}