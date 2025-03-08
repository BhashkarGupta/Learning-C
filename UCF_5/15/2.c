//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main(){
    int userInput1, userInput2, temp;
    printf("Please enter two numbers to print out prime numbers between them: ");
    scanf("%d %d", &userInput1, &userInput2);
    for(int i = userInput1; i <= userInput2; i++)
    {
        for(temp = 2; temp < i; temp++)
        {
            if(i % temp == 0)
            break;
        }
        if(temp == i)
        printf("%d ", i);
    }
    return 0;
}