// Write a recursive function to print first N even natural numbers
#include<stdio.h>

void NaturalEvenNumber(int num){
    if(num > 0){
        NaturalEvenNumber(num-1);
        printf("%d ", 2 * num);
    }
}

int main(){
    NaturalEvenNumber(20);
    printf("\n");
    return 0;
}
