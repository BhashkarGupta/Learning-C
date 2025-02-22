// Write a program to check whether roots of a given quadratic equation are real and distinct, real and equal or imaginary roots. 
#include<stdio.h>
int main(){
    int a, b, c, D;
    printf("For a quadratic equation aX^2 + bX + c = 0, Please enter the value of a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - 4 * a * c;
    if (D == 0)
    {
        printf("Roots are real and equal\n");
    }else if (D > 0)
    {
        printf("Roots are real and distinct\n");
    }else
    {
        printf("Imaginary roots\n");
    }
    return 0;
}