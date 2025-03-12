// Write a program to find the Nth term of the Fibonacci series.
#include<stdio.h>
int main(){
    int userInput, temp, temp1 = 0, temp2 = 1, counter = 2;
    printf("Please enter a number to find the Nth term of the Fibonacci series: ");
    scanf("%d", &userInput);
    while(userInput != counter)
    {
        temp = temp2;
        temp2 = temp1 + temp2;
        temp1 = temp;
        counter++;
    }
    printf("The %dth term of Fibonacci series is %d\n", userInput, temp2);
    return 0;
}