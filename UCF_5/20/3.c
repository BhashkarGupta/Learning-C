// Write a program to check whether a given character is uppercase alphabet or lower
// case alphabet or some other special character, using switch case statement.
#include<stdio.h>
int main(){
    char userInput;
    printf("Please enter a character: ");
    scanf("%c", &userInput);
    switch(userInput){
        case 65 ... 90:
        printf("It's upper case letter\n");
        break;

        case 97 ... 122:
        printf("It's lower case letter\n");
        break;

        default:
        printf("special character\n");
    }
    return 0;
}