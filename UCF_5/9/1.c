// Write a program which takes the cost price and selling price of a product form the user. Now calculate and print profit or loss percentage. 
#include<stdio.h>
int main(){
    int costPrice, sellingPrice, difference;
    printf("Please enter the Cost price of the product: ");
    scanf("%d", &costPrice);
    printf("Please enter the Selling price of the product: ");
    scanf("%d", &sellingPrice);
    difference = sellingPrice - costPrice;
    if (difference > 0)
    {
        printf("Profit is %d\n", difference);
    } 
    else
    {
        printf("Loss is %d\n", difference * (-1));
    }
    return 0;
}