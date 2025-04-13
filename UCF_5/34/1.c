// Write a program to calculate the length of the string. (without using builtin method) 
#include<stdio.h>

int main(){
    char str[50];
    int i = 0;
    printf("Please enter a string:");
    fgets(str, 50, stdin);
    while (str[i] != 0)
    {
        i++;
    }
    
    printf("string lenght is: %d\n", i-1);
    return 0;
}
