// Write a program to find next Prime number of a given number
#include<stdio.h>
int main(){
    int userInput, temp, nextPrime = 0;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    while(nextPrime == 0){
        for(temp = 2; temp < userInput; temp++){
            if(userInput % temp == 0){
                break;
            }
        }
        if(temp == userInput){
            nextPrime = temp;
            break;
        }
        userInput++;
    }
    printf("Next prime is: %d", nextPrime);
    return 0;
}