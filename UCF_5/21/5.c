// Write a function to print first N odd natural numbers.
#include<stdio.h>

void OddNaturalNumber(int num){
    int counter = 0, temp = 1;
    while(counter != num){
        if(temp%2 != 0){
            printf("%d ", temp);
            counter++;
        }
        temp++;
    }
}

int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    OddNaturalNumber(userInput);
    return 0;
}