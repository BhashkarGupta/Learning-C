// use scanf to get sting input
#include<stdio.h>

int main(){
    char string[100];
    int stringCount = 0;
    char input;

    printf("Please input a string: \n");
    while (input != '\n')
    {
        scanf("%c", &input);
        string[stringCount] = input;
        stringCount++;

    }
    string[stringCount] = '\0';
    puts(string);

    return 0;
}