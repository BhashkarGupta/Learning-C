// Write a function to transform string into uppercase 
#include<stdio.h>

void Capitalize(char str []){
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 97 && str[i] < 122)
        {
            str[i] -= 32;
        }
        i++;
    }
}

int main(){
    char str[] = "This is the sample string";
    Capitalize(str);
    puts(str);
    return 0;
}