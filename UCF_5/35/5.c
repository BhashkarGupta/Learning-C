// Write a program to find first occurrence of a given character in a given string.
#include<stdio.h>

int FindCharacter(char str[], char character){
    int count = -1, i = 0;
    while (str[i] != 0)
    {
        if (str[i] == character)
        {
            count = i+1;
            return count;
        }
        i++;
    }
    return count;
}

int main(){
    char str[] = "this is the #sample string";
    printf("The character %c has been first found at %d\n", '#', FindCharacter(str, '#'));
    return 0;
}
