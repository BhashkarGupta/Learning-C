// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main(){
    int counter = 1;
    printf("The Armstrong number under 1000 are: \n");
    while (counter <= 1000)
    {
        int sum = 0, digitCounter = 1;
        int tempCounter = counter;
        while (tempCounter / 10 != 0)
        {
            digitCounter++;
            tempCounter /= 10;
        }
        // printf("%d\n", digitCounter);
        int temp = counter;
        for (int i = 0; i < digitCounter; i++)
        {
            int currentDigit = temp % 10;
            temp /= 10;
            int digitMultiplier = 1;
            for (int j = 0; j < digitCounter; j++)
            {
                digitMultiplier *= currentDigit;
            }
            sum += digitMultiplier;
        }
        
        if (sum == counter)
        {
            printf("%d ", counter);
        }
        // printf("%d\n", counter);
        counter++;
    }
    printf("\n");
    return 0;
}