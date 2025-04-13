// Write a program to count the occurrence of a given character in a given string. 
#include<stdio.h>

int CountCharacter(char str[], char character){
    int count = 0, i = 0;
    while (str[i] != 0)
    {
        if (str[i] == character)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char str[] = "this is the sample string";
    printf("'t' count = %d\n", CountCharacter(str, 't'));
    return 0;
}
