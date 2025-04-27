// Write a function to swap values of two int variables (TSRN).
#include<stdio.h>

void Swap(int *var1, int *var2){
    int temp;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main(){
    int a = 5, b = 8;
    Swap(&a, &b);
    printf("a = %d and b = %d\n", a, b);
    return 0;
}
