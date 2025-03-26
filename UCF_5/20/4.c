// Write a program to check whether a given character is vowel or consonant or some
// other special character, using switch case statement.
#include<stdio.h>
int main(){
    char userInput;
    printf("Please enter a character: ");
    scanf("%c", &userInput);
    switch(userInput){
        case 65:
        case 69:
        case 73:
        case 79:
        case 85:
        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
        printf("vowel\n");
        break;

        case 0 ... 64:
        case 123 ... 127:
        case 91 ... 96:
        printf("special character\n");
        break;

        default:
        printf("Consonent\n");
    }
    return 0;
}