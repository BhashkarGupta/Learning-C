// Write a program to print first N terms of Fibonacci series 
#include<stdio.h>
int main(){
    int userInput, temp, temp1 = 0, temp2 = 1, counter = 2;
    printf("Please enter a number to first N terms of Fibonacci series: ");
    scanf("%d", &userInput);
    printf("Fibonacci series: ");
    if(userInput > 2){
        printf("%d ", temp1);
    }
    if(userInput > 3){
        printf("%d ", temp2);
    }
    while(userInput != counter)
    {
        temp = temp2;
        temp2 = temp1 + temp2;
        temp1 = temp;
        counter++;
        printf("%d ", temp2);
    }
    printf("\n");
    return 0;
}