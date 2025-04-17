// Write a function to count words in a given string
#include<stdio.h>

int WordCount(char str[]){
    int count = 0, wordCount = 0;
    while(str[count] != 0){
        count++;
    }
    count--;
    for(int i=0; i<=count; i++){
        if(str[i] == ' '){
            if(i != 0 || i != count){
                wordCount++;
            }
        }
    }
    return wordCount++;
}

int main(){
    char str[] = "This is sample string";
    printf("Word count : %d\n", WordCount(str));
    return 0;
}
