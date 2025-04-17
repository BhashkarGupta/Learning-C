// Write a function to find a word in a given string.
#include<stdio.h>

int CheckWord(char str[], char word[]){
    int strLength = 0, wordLenth = 0, wordCounter = 0;
    while(str[strLength] != 0){
        strLength++;
    }
    while(word[wordLenth] != 0){
        wordLenth++;
    }
    for(int i=0; i<strLength; i++){
        if(str[i] == word[wordCounter]){
            wordCounter++;
            if(wordCounter == wordLenth){
                return 1;
            }
        }else{
            wordCounter = 0;
        }
    }
    return 0;
}

int main(){
    char str[] = "I love technology";
    char word[] = "love";
    printf("If it contains the given word: %d\n", CheckWord(str, word));
    return 0;
}
