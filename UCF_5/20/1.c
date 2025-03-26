// Write a program to find and display grade obtained by a student in a test. Grading
// specifications are as follows:
// - Marks from 90 to 100 : Grade A
// - Marks from 80 to less than 90 : Grade B

// - Marks from 70 to less than 80 : Grade C

// - Marks from 60 to less than 70 : Grade D

// - Marks from 50 to less than 60 : Grade E

// - Marks below 50 : Grade F

// - Marks greater than 100 or less than 0 : Invalid Marks
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter teh marks: ");
    scanf("%d", &userInput);
    switch(userInput){
        case 90 ... 100:
        printf("Grade A\n");
        break;

        case 80 ... 89:
        printf("Grade B\n");
        break;

        case 70 ... 79:
        printf("Grade C\n");
        break;

        case 60 ... 69:
        printf("Grade D\n");
        break;

        case 50 ... 59:
        printf("Grade E\n");
        break;

        case 0 ... 49:
        printf("Grade F\n");
        break;

        default:
        printf("Invalid makrs\n");
    }
    return 0;
}