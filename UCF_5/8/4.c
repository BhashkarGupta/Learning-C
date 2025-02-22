// Write a program to check whether a given year is  a leap year or not. 
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a year: ");
    scanf("%d", &userInput);
    if(userInput % 100 == 0){
        if (userInput % 400 == 0)
        {
            printf("%d a Leap Year.\n", userInput);
        } else {
            printf("%d not a Leap Year.\n", userInput);
        }
    }else if (userInput % 4 == 0)
    {
        printf("%d a Leap Year.\n", userInput);
    }else {
        printf("%d not a Leap Year.\n", userInput);
    }
    
    return 0;
}