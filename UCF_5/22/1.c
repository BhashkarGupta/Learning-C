// Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>

int Factorial(int num){
    int factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int userInput;
    printf("Please enter a number to find the factorial: ");
    scanf("%d", &userInput);
    printf("Factorial of %d is %d", userInput, Factorial(userInput));
    return 0;
}