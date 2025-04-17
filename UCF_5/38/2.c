// Write a function to trim a string (removing leading spaces from both the ends).
#include<stdio.h>

void TrimString(char str[]){
    int count = 0, shifter = 1;
    while(str[count] != 0){
        count++;
    }
    if(str[0] == ' '){
        shifter++;
        for(int i=0; i<count; i++){
            str[i] = str[i+1];
        }
    }
    if(str[count-shifter] == ' '){
        str[count-shifter] = 0;
    }
}

int main(){
    char str[] = " This is a sample string ";
    TrimString(str);
    printf("%s", str);
    printf(".");
    return 0;
}
