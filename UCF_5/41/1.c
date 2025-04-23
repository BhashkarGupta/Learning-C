// Write a program to find words ending with a letter 's' and store each such word in a 2d char array.
#include<stdio.h>

int FindWordsAsPerCharacter(char str[], char character, char dataString[][50]){
    int indexCounter = 0, wordPointer = 0, wordCounter = 0, j, i;
    while(str[indexCounter] == ' '){
        indexCounter++;
    }
    while(str[indexCounter] != 0){
        if(str[indexCounter] == ' '){
            if(str[indexCounter-1] == character){
                for(i=wordPointer, j=0; i<indexCounter; i++, j++){
                    dataString[wordCounter][j] = str[i];
                }
                dataString[wordCounter][j] = 0;
                wordCounter++;
                if(str[indexCounter+1] != ' '){
                    wordPointer = indexCounter + 1;
                }
            }else if(str[indexCounter+1] != ' '){
                wordPointer = indexCounter + 1;
            }
        }
        indexCounter++;
    }
    if(str[indexCounter-1] == character){
        for(i=wordPointer, j=0; i<indexCounter; i++, j++){
            dataString[wordCounter][j] = str[i];
        }
        dataString[wordCounter][j] = 0;
        wordCounter++;
    }
    return wordCounter;
}

void PrintData(char data[][50], int dataCount){
    for(int i=0; i<dataCount; i++){
        printf("%s\n", data[i]);
    }
}

int main(){
    printf("Program started...\n");
    char str[] = "He loves to eat mangones and apples";
    char dataString[10][50];
    int numberOfwords = FindWordsAsPerCharacter(str, 's', dataString);
    printf("number of words: %d\n", numberOfwords);
    PrintData(dataString, numberOfwords);
    return 0;
}
