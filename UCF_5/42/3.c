// Write a function to convert a given string into uppercase.
#include<stdio.h>

void ToUpperCase(char *strPointer){
    int strIndexCounter = 0;
    while(*(strPointer + strIndexCounter) != 0){
        if(*(strPointer + strIndexCounter) >= 97 && *(strPointer + strIndexCounter) <= 122){
            *(strPointer + strIndexCounter) -= 32;
        }
        strIndexCounter++;
    }
}

int main(){
    char str[] = "This is called a string";
    ToUpperCase(str);
    puts(str);
    return 0;
}
