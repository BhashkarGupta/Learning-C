// Write a program which takes the cost price and selling price of a product form the user. Now calculate and print profit or loss percentage. 
#include<stdio.h>
int main(){
    float costPrice, sellingPrice, difference;
    printf("Please enter the Cost price of the product: ");
    scanf("%f", &costPrice);
    printf("Please enter the Selling price of the product: ");
    scanf("%f", &sellingPrice);
    difference = sellingPrice - costPrice;
    if (difference > 0)
    {
        printf("Profit is %.2f%% \n", (difference / costPrice) * 100);
    } 
    else
    {
        printf("Loss is %.2f%% \n", (difference / costPrice) * (-100));
    }
    return 0;
}