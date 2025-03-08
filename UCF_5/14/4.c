// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main(){
    int userInput1, userInput2, temp1, temp2, LCM = 1, temp = 2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    temp1 = userInput1;
    temp2 = userInput2;
    while(temp <= temp1 && temp <= temp2)
    {
        if(temp1 % temp == 0 && temp2 % temp == 0)
        {
            temp1 = temp1 / temp;
            temp2 = temp2 / temp;
            LCM = LCM * temp;
            temp = 2;
        } else 
        {
            temp++;
        }
    }
    LCM = LCM * temp1 * temp2;
    printf("The LCM of %d and %d is %d.\n", userInput1, userInput2, LCM);
    return 0;
}