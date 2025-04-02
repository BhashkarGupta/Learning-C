// Write a recursive function to print first N odd natural numbers
#include<stdio.h>

void NaturalOddNumbers(int num){
    if(num > 0){
        NaturalOddNumbers(num-1);
        printf("%d ", 2*num -1);
    }
}

int main(){
    NaturalOddNumbers(10);
    printf("\n");
    return 0;
}
