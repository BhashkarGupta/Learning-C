// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>

int OddNumberSum(int num){
    if(num == 1)
    return 1;
    return (2*num-1) + OddNumberSum(num-1);
}

int main(){
    printf("%d\n", OddNumberSum(5));
    return 0;
}
