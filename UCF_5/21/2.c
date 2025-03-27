// Write a function to calculate simple interest.
#include<stdio.h>

float SimpleInt(int Amount, float interest, float time){
    return Amount * interest * time * 0.01;
}
int main(){
    int amount;
    float interest, time;
    printf("Please enter the principle amount: ");
    scanf("%d", &amount);
    printf("Please enter interest rate:");
    scanf("%f", &interest);
    printf("Please ienter the time:");
    scanf("%f", &time);
    printf("The simple interest is %.2f", SimpleInt(amount, interest, time));
    return 0;
}