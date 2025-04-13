// Write a program in C to copy one string to another char array. 
#include<stdio.h>

void CopyString(char str1 [], char str2[]){
    int count = 0;
    while (str1[count] != 0)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        str2[i] = str1[i];
    }
}

int main(){
    char str[] = "This Is The Sample String";
    char newStr[50];
    CopyString(str, newStr);
    puts(newStr);
    return 0;
}
