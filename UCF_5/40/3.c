// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>

void TakeUserInput(char data[][50], int dataLenght){
    for(int i=0; i<dataLenght; i++){
        fgets(data[i], 50, stdin);
        int temp = 0;
        while(data[i][temp] != '\n'){
            if(data[i][temp] == 0){
                break;
            }
            temp++;
        }
        if(data[i][temp] == '\n'){
            data[i][temp] = 0;
        }
    }
}

char ToSmallcase(char character){
    switch(character){
        case 65 ... 90:
            return character + 32;
        default:
            return character;
    }
}

int CompareString(char str1[], char str2[]){
    int temp = 0;
    while(str1[temp] != 0 && str2[temp] != 0){
        if(ToSmallcase(str1[temp]) < ToSmallcase(str2[temp])){
            return 1;
        }else if(ToSmallcase(str1[temp]) > ToSmallcase(str2[temp])){
            return 2;
        }
        temp++;
    }
    if(str1[temp] == 0 && str2[temp] == 0){
        return 0;
    }else if(str1[temp] == 0){
        return 1;
    }else{
        return 2;
    }
}

void CopyString(char str[], char newStr[]){
    // considering both array is of same size
    int indexCounter = 0;
    while(str[indexCounter] != 0){
        newStr[indexCounter] = str[indexCounter];
        indexCounter++;
    }
    newStr[indexCounter] = str[indexCounter];
}

void SortStringArray(char stringArray[][50], int arraySize){
    int smallestElementIndex;
    char tempString[50];
    for(int i=0; i<arraySize; i++){
        smallestElementIndex = i;
        for(int j=i+1; j<arraySize; j++){
            if(CompareString(stringArray[smallestElementIndex], stringArray[j]) == 2){
                smallestElementIndex = j;
            }
        }
        if(smallestElementIndex != i){
            CopyString(stringArray[i], tempString);
            CopyString(stringArray[smallestElementIndex], stringArray[i]);
            CopyString(tempString, stringArray[smallestElementIndex]);
        }
    }
}

void PrintData(char data[][50], int dataCount){
    for(int i=0; i<dataCount; i++){
        printf("%s\n", data[i]);
    }
    printf("\n");
}

int main(){
    char cityNames[10][50];
    printf("Please enter 10 cities names:\n");
    TakeUserInput(cityNames, 10);
    SortStringArray(cityNames, 10);
    printf("\nSorted City List:\n");
    PrintData(cityNames, 10);
    printf("\n");
    return 0;
}
