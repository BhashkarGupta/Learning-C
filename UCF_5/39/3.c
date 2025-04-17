// Write a function to make first character of each word of the string capital.
#include<stdio.h>

char Capitalize(char c){
    if(c >= 97 && c <= 122){
        return c - 32;
    }else{
        return c;
    }
}

void CapitalizeFirstChar(char str[]){
    int count = 0;
    str[count] = Capitalize(str[count]);
    count++;
    while(str[count] != 0){
        if(str[count] == ' '){
            count++;
            if(str[count] == 0){
                break;
            }
            str[count] = Capitalize(str[count]);
        }
        count++;
    }
}

int main(){
    char str[] = "this is an example";
    CapitalizeFirstChar(str);
    puts(str);
    return 0;
}
