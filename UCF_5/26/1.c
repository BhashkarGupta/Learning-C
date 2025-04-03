// Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>

void EvenNaturalReverse(int num){
    if(num > 0){
        printf("%d ", 2*num);
        EvenNaturalReverse(num - 1);
    }
}

int main(){
    EvenNaturalReverse(10);
    printf("\n");
    return 0;
}
