// Print the Sum of First n Natural Numbers. 
#include<stdio.h>

int main()
{
    int number, count, sum;
    printf("Enter the Number for finding the Sum of n Natural Numbers: ");
    scanf("%d", &number);
    count = 0;
    while (count <= number)
    {
        sum += count;
        count++;
    }
    printf("The Sum of the n Natural up to %d = %d\n", number, sum);
    return 0;
}
