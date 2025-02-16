// Write a program to print last digit of a given number.
#include <stdio.h>
int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Last digit of %d is %d\n",num, num%10);
    return 0;
}