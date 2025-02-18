// Write a program to swap values of two int variables without using third variable and without using +, - operators.
#include<stdio.h>
int main(){
    float var1 = 3, var2 = 11;
    printf("var1 = %d\nvar2 = %d\n", (int)var1, (int)var2);
    printf("Swapping:\n");
    var1 = var1 * var2;
    var2 = var1 / var2;
    var1 = var1 / var2;
    printf("var1 = %d\nvar2 = %d\n", (int)var1, (int)var2);
    return 0;
}