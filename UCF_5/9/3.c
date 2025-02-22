// Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main(){
    char userInput;
    printf("Please enter a chracter: ");
    scanf("%c", &userInput);
    if (userInput >= 65 && userInput <= 90)
    {
        printf("its Uppercase\n");
    } 
    else if (userInput >= 97 && userInput <= 122)
    {
        printf("its Lowercase\n");
    } 
    else 
    {
        printf("Neither Uppercase nor Lowercase letter\n");
    }
    return 0;
}