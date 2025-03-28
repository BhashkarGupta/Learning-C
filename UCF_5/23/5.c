// Write a function to print first N prime numbers
#include<stdio.h>

void NPrimeNumber(int num){
    int temp = 2, prime = 1;
    printf("1 ");
    while(prime != num){
        int counter = 2;
        while(counter < temp){
            if(temp%counter == 0){
                break;
            }
            counter++;
        }
        if(temp == counter){
            printf("%d ", temp);
            prime++;
        }
        temp++;
    }
    printf("\n");
}

int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    printf("First %d prime numbers are:\n", userInput);
    NPrimeNumber(userInput);
    return 0;
}