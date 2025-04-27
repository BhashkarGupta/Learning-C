// Write a function to convert a given string into lowercase.
#include<stdio.h>

void ToLowerCase(char *strPointer){
    int strIndexCounter = 0;
    while(*(strPointer + strIndexCounter) != 0){
        if(*(strPointer + strIndexCounter) >= 65 && *(strPointer + strIndexCounter) <= 90){
            *(strPointer + strIndexCounter) += 32;
        }
        strIndexCounter++;
    }
}

int main(){
    char str[] = "This is called a string";
    ToLowerCase(str);
    puts(str);
    return 0;
}