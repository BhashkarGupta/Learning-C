// Write a function to print first N terms of Fibonacci series
#include<stdio.h>

void Fibonacci(int num){
    int temp1 = -1, temp2 = 1, temp, counter = 0;
    while(counter <= num){
        temp = temp2;
        temp2 = temp1 + temp2;
        temp1 = temp;
        printf("%d ", temp2);
        counter++;
    }
    printf("\n");
}

int main(){
    int userInput;
    printf("How many FIbonacci series term has to be printed: ");
    scanf("%d", &userInput);
    Fibonacci(userInput);
    return 0;
}