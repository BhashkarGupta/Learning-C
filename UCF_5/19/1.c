// Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter the month number: ");
    scanf("%d", &userInput);
    if(userInput >= 3 && userInput <=7){
        if(userInput % 2 == 0){
            userInput = 3;
        }else{
            userInput = 1;
        }
    }else if(userInput > 12){
        userInput = 13;
    }else if(userInput >= 8 && userInput <=12){
        if(userInput % 2 == 0){
            userInput = 1;
        }else{
            userInput = 3;
        }
    }
    switch(userInput){
        case 2:
        printf("This month has 28/29 days\n");
        break;

        case 3:
        printf("This month has 30 days\n");
        break;

        case 1:
        printf("This month has 31 days\n");
        break;

        default:
        printf("Invalid Input");
    }

    return 0;
}