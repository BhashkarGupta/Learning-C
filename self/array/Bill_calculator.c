// Write a program to enter price of items and print their final cost with gst
#include<stdio.h>

int main()
{
    int items;
    float itemsPrice[20];
    float totalPrice;
    printf("C-Bill Calculator\n\n");
    printf("Enter the Number of items in the Bill(20 items Max): ");
    scanf("%d", &items);
    for (int count = 0; count < items; count++){
        printf("Please enter the Price of item %d: ", count+1);
        scanf("%f", &itemsPrice[count]);
        totalPrice += itemsPrice[count];
    }
    printf("Final price of items including GST = %.2f\n", totalPrice*1.18);
    return 0;
}
