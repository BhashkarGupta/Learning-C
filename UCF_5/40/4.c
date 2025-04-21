// Write a function to store each word a string in a 2 dimensional char array.
#include<stdio.h>

int WordCount(char str[]){
    int count = 0, wordCount = 0;
    while(str[count] != 0){
        count++;
    }
    count--;
    for(int i=0; i<=count; i++){
        if(str[i] == ' '){
            if(i != 0 && i != count){
                wordCount++;
            }
        }
    }
    return wordCount + 1;
}

void StringToWordArray(char str[], char wordArray[][50]){
    int indexCounter = 0, wordPointer = 0, wordCounter = 0;
    while(str[indexCounter] == ' '){
        indexCounter++;
    }
    while(str[indexCounter] != 0){
        if(str[indexCounter] != ' '){
            wordArray[wordCounter][wordPointer] = str[indexCounter];
            wordPointer++;
        }else if(str[indexCounter + 1] != ' '){
            wordArray[wordCounter][wordPointer] = 0;
            wordPointer = 0;
            wordCounter++;
        }
        indexCounter++;
    }
    wordArray[wordCounter][wordPointer] = 0;
}

void PrintData(char data[][50], int dataCount){
    for(int i=0; i<dataCount; i++){
        printf("%s\n", data[i]);
    }
}

int main(){
    char str[] = " Ranchi is the capital of Hazaribagh ";
    int wordCount = WordCount(str);
    printf("Word count: %d\n", wordCount);
    char wordArray[wordCount][50];
    StringToWordArray(str, wordArray);
    PrintData(wordArray, wordCount);
    return 0;
}
