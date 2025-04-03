// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>

int EvenNumberSum(int num){
    if(num == 1)
    return 2;
    return (2*num) + EvenNumberSum(num-1);
}

int main(){
    printf("%d\n", EvenNumberSum(5));
    return 0;
}