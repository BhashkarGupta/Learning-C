// Write a program which takes the month number as an input and display number of the days in that month. 
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter the month number: ");
    scanf("%d", &userInput);
    if (userInput > 0 && userInput <= 7)
    {
        if (userInput == 2)
        {
            printf("Number of days: 28 / 29\n");
        }
        else if (userInput % 2 == 0)
        {
            printf("Number of days: 30\n");
        }
        else
        {
            printf("Number of days: 31\n");
        }
        
    }
    else if (userInput > 7 && userInput <= 12)
    {
        printf((userInput % 2) == 0 ? "Number of days: 31\n" : "Number of days: 30\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}