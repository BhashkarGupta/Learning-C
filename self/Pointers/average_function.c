//Write a function to calculate the sum, product and average of 2 numbers. Print that average in the main function. 
#include <stdio.h>

void calculate(int a, int b, int *sum, int *product, float *average);

int main()
{
    int a, b, sum, product;
    float  average;
    printf("Please enter the number to find sum, product and average of them\n");
    printf("Please enter the first number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);
    calculate(a, b, &sum, &product, &average);
    printf("Result -\nSum: %d\nProduct: %d\nAverage: %.2f\n", sum, product, average);
    return 0;
}

void calculate(int a, int b, int *sum, int *product, float *average){
    *sum = a + b;
    *product = a * b;
    *average = (float)*sum / 2;
    return;
}
