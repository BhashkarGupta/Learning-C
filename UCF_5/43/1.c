// Write a function to swap strings of two char arrays.
#include<stdio.h>

void SwapString(char *str1, char *str2){
    char temp, indexCounter = 0;
    while(*(str1 + indexCounter) != 0 || *(str2 + indexCounter) != 0){
        temp = *(str1 + indexCounter);
        *(str1 + indexCounter) = *(str2 + indexCounter);
        *(str2 + indexCounter) = temp;
        indexCounter++;
    }
        temp = *(str1 + indexCounter);
        *(str1 + indexCounter) = *(str2 + indexCounter);
        *(str2 + indexCounter) = temp;
}

int main(){
    char str1[100] = "Always got hurt when I fell in Love";
    char str2[100] = "Got a couple scars but you steach them up";
    SwapString(str1, str2);
    puts(str1);
    puts(str2);
    return 0;
}
