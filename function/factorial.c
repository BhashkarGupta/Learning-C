// Print factorial of Number input by user
#include<stdio.h>

int main()
{
    int user_input, factorial = 1;
    printf("Please input the number to find it's factorial: ");
    scanf("%d", &user_input);
    for (int i = 1; i <= user_input; i++)
    {
        factorial*= i;
    }
    printf("Factorial of the number %d is %d\n", user_input, factorial);
    return 0;
}
