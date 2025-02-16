// Write a program to print a give number without it's last digit.
#include <stdio.h>
int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Number without it's last digit is %d\n", num/10);
    return 0;
}