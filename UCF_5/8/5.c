// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times. 
#include<stdio.h>
int main(){
    int userInput1, userInput2, userInput3, largestNumber;
    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &userInput1, &userInput2, &userInput3);
    if (userInput1 >= userInput2)
    {
       largestNumber = userInput1 >= userInput3 ? userInput1 : userInput3;
    }
    else 
    {
        largestNumber = userInput2 >= userInput3 ? userInput2 : userInput3;
    }
    printf("The largest Number is: %d\n", largestNumber);
    return 0;
}