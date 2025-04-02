// Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>

void NaturalOddNumbersRev(int num){
    if(num > 0){
        printf("%d ", 2 * num - 1);
        NaturalOddNumbersRev(num -1);
    }
}

int main(){
    NaturalOddNumbersRev(10);
    printf("\n");
    return 0;
}
