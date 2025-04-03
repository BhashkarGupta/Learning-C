// Write a recursive function to print squares of first N natural numbers
#include<stdio.h>

void SquaresNaturalNumbers(int num){
    if(num > 0){
        SquaresNaturalNumbers(num-1);
        printf("%d ", num * num);
    }
}

int main(){
    SquaresNaturalNumbers(10);
    printf("\n");
    return 0;
}
