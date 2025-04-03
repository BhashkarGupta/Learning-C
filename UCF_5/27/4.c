// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>

int Square(int num){
    return num * num;
}

int NaturalNumberSquareSum(int num){
    if(num == 1)
    return 1;
    return Square(num) + NaturalNumberSquareSum(num-1);
}

int main(){
    printf("%d\n", NaturalNumberSquareSum(5));
    return 0;
}
