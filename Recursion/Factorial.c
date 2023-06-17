// Find the factorial of give number using Recursive Function.
#include<stdio.h>

// Declaring Funciton
int factorial(int number);

int main(){
    int number;
    printf("Please input the number to find it's factorial: ");
    scanf("%d", &number);
    printf("The Factorial of %d is %d\n", number, factorial(number));
    return 0;
}

// Creating Function
int factorial(int number){
    if (number == 0){
        return 1;
    }
    int result;
    result = factorial(number - 1) * number;
    return result;
}