// Write a program to count spaces in a given string. 
#include<stdio.h>

int CountSpaces(char str[]){
    int count = 0, i = 0;
    while (str[i] != 0)
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char str[] = "this is the sample string";
    printf("space count = %d\n", CountSpaces(str));
    return 0;
}