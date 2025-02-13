// Write a program to calculate circumference of a circle.
#include<stdio.h>
int main(){
    int amount;
    float time, rate;
    printf("Please enter the principle amount: ");
    scanf("%d", &amount);
    printf("Please enter the rate of the interest: ");
    scanf("%f", &rate);
    printf("Please enter time for the loan: ");
    scanf("%f", &time);
    printf("Simple Interest would be %.2f", (amount * rate * time)/100);
    return 0;
}