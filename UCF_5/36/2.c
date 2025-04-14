// Write a function to reverse a string
#include <stdio.h>
void ReverseString(char str []){
    int i = 0;
    char temp;
    while (str[i] != 0)
    {
        i++;
    }
    
    for (int j = 0; j <= i/2; j++)
    {
        temp = str[j];
        str[j] = str[i-j-1];
        str[i-j-1] = temp;
    } 
}

int main(){
    char str[] = "This Is The Sample String";
    ReverseString(str);
    puts(str);
    return 0;
}