// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>

void NaturalNumbersReverse(int num){
    if(num > 0)
    printf("%d ", num);
    NaturalNumbers(--num);
}

int main(){
    NaturalNumbersReverse(10);
    printf("\n");
    return 0;
}
