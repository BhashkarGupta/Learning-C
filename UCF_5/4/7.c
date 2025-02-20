// Write a program to swap values of two int variable without using third variable and arithmetic operators
#include<stdio.h>
int main(){
    int var1 = 12, var2 = 21;
    printf("var1 = %d\nvar2 = %d\n", var1, var2);
    printf("Swapping:\n");
    var1 = var1 ^ var2;
    var2 = var1 ^ var2;
    var1 = var1 ^ var2;
    printf("var1 = %d\nvar2 = %d\n", var1, var2);
    return 0;
}