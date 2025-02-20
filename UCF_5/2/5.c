// Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include<stdio.h>
int main(){
    float cost_price, selleing_price, difference;
    printf("Please enter the buying price for a banana: ");
    scanf("%f", &cost_price);
    printf("Please enter the selling price for banana: ");
    scanf("%f", &selleing_price);
    difference = selleing_price - cost_price;
    if (difference > 0 ){
        printf("The profit of selling 25 bananas is: %.2f\n", difference / 12 * 25);
    } else if (difference < 0){
        printf("The Loss of selling 25 banannas is %.2f\n", difference / 12 * 25);
    } else {
        printf("There is no profit or loss in this transanction");
    }
    return 0;
}