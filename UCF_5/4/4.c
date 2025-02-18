// Write a program to swap values of two int variables
#include<stdio.h>
int main(){
    int var1 = 5, var2 = 4, temp;
    printf("var1 = %d\nvar2 = %d\n", var1, var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("After swapping:\n");
    printf("var1 = %d\nvar2 = %d\n", var1, var2);
    return 0;
}