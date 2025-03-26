// Write a menu driven program with the following options:
// Factorial of a number
// Check Even and Odd
// Area of circle
// Sum of first N natural numbers
// Exit
#include<stdio.h>
#include<stdlib.h>

void Factorial(){
    int num, temp, result = 1;
    printf("Please enter a number to find out it's factorial: ");
    scanf("%d", &num);
    for(temp = num; temp >= 1; temp-- ){
        result *= temp;
    }
    printf("The factorial of %d is %d\n", num, result);
}

void EvenOrOdd(){
    int num;
    printf("Please enter a number to find if the number is even or odd:");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("The given number is even number\n");
    }else{
        printf("The given number is odd number.\n");
    }
}

void CircleArea(){
    float radius;
    printf("Please enter the radius of circle: ");
    scanf("%f", &radius);
    printf("The area of circle is %.2f\n", 3.14 * radius * radius);
}

void NaturalNumberSum(){
    int num, temp, result = 0;
    printf("Please enter a number to find out it's factorial: ");
    scanf("%d", &num);
    for(temp = num; temp >= 1; temp-- ){
        result += temp;
    }
    printf("The sum of %d natural number is %d\n", num, result);
}

int main(){
    int userInput;
    printf("Please select the operation you want to perform:\n");
    printf("1.Factorial of a number\n");
    printf("2.Check Even and Odd\n");
    printf("3.Area of circle\n");
    printf("4.Sum of first N natural numbers\n");
    printf("5.Exit\n");
    scanf("%d", &userInput);
    switch(userInput){
        case 1:
        Factorial();
        break;

        case 2:
        EvenOrOdd();
        break;

        case 3:
        CircleArea();
        break;

        case 4:
        NaturalNumberSum();
        break;

        case 5:
        exit(1);
        
        default:
        printf("Invalid Input\n");
    }
    return 0;
}