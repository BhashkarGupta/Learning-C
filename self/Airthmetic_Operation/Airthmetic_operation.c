#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter First Number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("The Sum of both Numbers is %f\n", a+b);
    printf("The Difference of both Numbers is %f\n", a-b);
    printf("The Multiplication of both Numbers is %f\n", a*b);
    if (b != 0) {
        printf("The Division of both Numbers is %f\n", a/b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;

}