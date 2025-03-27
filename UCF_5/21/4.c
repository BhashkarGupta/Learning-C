// Write a function to print first N natural numbers
#include<stdio.h>

void NaturalNumber(int num){
    for(int i = 1; i <= num; i++){
        printf("%d ", i);
    }
    printf("\n");
}
int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    NaturalNumber(userInput);
    return 0;
}