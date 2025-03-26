// Write a menu driven program with the following options:
// Calculate LCM of two numbers
// Calculate sum of the digits of a number
// Volume of a cuboid
// Check whether a given number is Prime or not
// Exit
#include<stdio.h>
#include<stdlib.h>

void LCM(){
    int userInput1, userInput2, LCM = 1, temp = 2;
    printf("Please enter two number to calculate their LCM:");
    scanf("%d %d", &userInput1, &userInput2);
    while(temp <= userInput1 && temp <= userInput2){
        if(userInput1 % temp == 0 && userInput2 % temp == 0){
            userInput1 /= temp;
            userInput2 /= temp;
            LCM *= temp;
            temp = 2;
        }else{
            temp += 1;
        }
    }
    LCM = LCM * userInput1 * userInput2;
    printf("LCM: %d\n", LCM);
}

void DigitSum(){
    int userInput, sum = 0;
    printf("Please enter a number:");
    scanf("%d", &userInput);
    while(userInput / 10 != 0){
        sum += (userInput % 10);
        userInput /= 10;
    }
    sum += userInput;
    printf("The sum of the digit is %d", sum);
}

void CuboidVolume(){
    float side1, side2, side3;
    printf("Please enter the sides of the cuboid:");
    scanf("%f %f %f", &side1, &side2, &side3);
    printf("Volume of cuboid is %.2f\n", side1 * side2 * side3);
}

void IfPrime(){
    int userInput, temp = 2;
    printf("Please enter a number:");
    scanf("%d", &userInput);
    if(userInput != 1){
        while(userInput % temp == 0){
            temp++;
        }
        if(temp == userInput){
            printf("The given number is a prime number\n");
        }else{
            printf("This given number is not a prime number\n");
        }
    }else{
        printf("This given number is not a prime number\n");
    }
}

int main(){
    int userInput;
    printf("Please select the operation you want to perform:\n");
    printf("1.Calculate LCM of two numbers\n");
    printf("2.Calculate sum of the digits of a number\n");
    printf("3.Volume of a cuboid\n");
    printf("4.Check whether a given number is Prime or not\n");
    printf("5.Exit\n");
    scanf("%d", &userInput);
    switch(userInput){
        case 1:
        LCM();
        break;

        case 2:
        DigitSum();
        break;

        case 3:
        CuboidVolume();
        break;

        case 4:
        IfPrime();
        break;

        case 5:
        exit(1);
        
        default:
        printf("Invalid Input\n");
    }
    return 0;
}