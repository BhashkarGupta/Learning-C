// Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>

int NaturalNumberSum(int num){
    if(num == 1)
    return 1;
    return num + NaturalNumberSum(num-1);
}

int main(){
    printf("%d\n", NaturalNumberSum(5));
    return 0;
}
