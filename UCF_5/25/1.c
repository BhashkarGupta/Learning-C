// Write a recursive function to print first N natural numbers
#include<stdio.h>

void NaturalNumbers(int num){
    if(num > 0){
        NaturalNumbers(num-1);
        printf("%d ", num);
    }
    
}

int main(){
    NaturalNumbers(10);
    printf("\n");
    return 0;
}
