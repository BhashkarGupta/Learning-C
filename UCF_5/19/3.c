// Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter the day number: ");
    scanf("%d", &userInput);
    switch(userInput){
        case 1:
        printf("Good morning, it's Monday, a brand-new start,\nA day to begin with an open heart!\n");
        break;

        case 2:
        printf("Hello, it's Tuesday, let's rise and shine,\nChase your dreams, and everything will align!\n");
        break;

        case 3:
        printf("Happy Wednesday, it's the middle of the week,\nStay strong and steady, you're on the peak!\n");
        break;

        case 4:
        printf("Good morning, Thursday, so full of grace,\nKeep pushing forward, you're in the right place!\n");
        break;

        case 5:
        printf("Happy Friday, the week's almost through,\nTime to smile, and relax a bit too!\n");
        break;

        case 6:
        printf("Hello, Saturday, let's have some fun,\nThe weekend's here, the best is yet to come!\n");
        break;

        case 7:
        printf("Good morning, Sunday, take it slow,\nRest and recharge, let your energy flow!\n");
        break;

        default:
        printf("Invalid input, the input should be between 1 to 7\n");
        
    }
    return 0;
}