// Write a function to transform a string into lowercase
#include<stdio.h>

void ToLowerCase(char str []){
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
}

int main(){
    char str[] = "This Is The Sample String";
    ToLowerCase(str);
    puts(str);
    return 0;
}