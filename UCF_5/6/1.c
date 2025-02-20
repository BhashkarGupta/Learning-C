// Assume price of a 1 USD in INR 84.23. Write a program to take the amount in INR and convert it into USD. 
#include<stdio.h>
int main(){
    const float usd = 84.23;
    float rupeeAmount, usdAmount;
    printf("Please enter the amount in Indian Rupee: ");
    scanf("%f", &rupeeAmount);
    usdAmount = rupeeAmount / usd;
    printf("%0.2f rupee in $ is %0.3f\n", rupeeAmount, usdAmount);
    return 0;
}