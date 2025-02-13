// Write a program to calculate average of three integers. Numbers are given by the user.
#include<stdio.h>
int main(){
    int num1, num2, num3;
    float sum;
    printf("Please Enter 3 number for calculating the average:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    printf("The average of the three given numbers is %.2f", sum/3 );
    return 0;
}