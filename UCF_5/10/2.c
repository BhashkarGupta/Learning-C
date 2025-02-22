// Write a program to check whether a given character is an alphabet(uppercase), an alphabet (lowercase), a digit, or a special character. 
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
    else if (userInput >= 48 && userInput <= 57)
    {
        printf("its a digit\n");
    } 
    else 
    {
        printf("Special character\n");
    }
    return 0;
}