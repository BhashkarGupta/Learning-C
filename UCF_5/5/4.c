// Write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int myNum;
    printf("Please enter any number: ");
    scanf("%d", &myNum);
    printf("Result: %d\n", (myNum/10)*10);

    return 0;
}