// Write a program to find if a character entered by user is upper case or not.
#include<stdio.h>

int main(){
    char ch;
    printf("Please Input a Character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case\n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lower Case\n");
    }
    else{
        printf("This is not a Characer.\n");
    }
    
}