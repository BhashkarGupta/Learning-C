// Write a function to store all the words in a given string which are starting from 'a', in a two dimensional char array.
#include<stdio.h>

void FindWordStartingWithChar(char str[], char wordList[][25], char letter){
    int indexCounter = 0, wordListCounter = 0, pointerHead;
    if(str[indexCounter] == letter){
        while(str[indexCounter] != ' '){
            wordList[wordListCounter][indexCounter] = str[indexCounter];
            indexCounter++;
        }
        wordList[wordListCounter][indexCounter] = 0;
        wordListCounter++;   
    }
    while(str[indexCounter] != 0){
        if(str[indexCounter - 1] == ' ' && str[indexCounter] == letter){
            pointerHead = indexCounter;
            while(str[indexCounter] != ' ' && str[indexCounter] != 0){
                wordList[wordListCounter][indexCounter - pointerHead] = str[indexCounter];
                indexCounter++;
            }
            wordList[wordListCounter][indexCounter - pointerHead] = 0;
            wordListCounter++;
        }
        indexCounter++;
    }
}

int main(){
    printf("Word Lists:\n");
    char wordList[5][25];
    char str[] = "there are ample of apples available in amarica";
    FindWordStartingWithChar(str, wordList, 'a');
    for(int i=0; i<5; i++){
        printf("%s\n", wordList[i]);
    }
    return 0;
}
