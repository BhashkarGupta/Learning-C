// Write a function to remove duplicate names stored in the list of names stored in a 2d char array.
#include<stdio.h>

int CompareString(char str1[], char str2[]){
    int indexCounter = 0;
    while(str1[indexCounter] != 0){
        if(str1[indexCounter] != str2[indexCounter]){
            return 0;
        }
        indexCounter++;
    }
    if(str2[indexCounter] == 0){
        return 1;
    }else{
        return 0;
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

void RemoveStringElement(char stringArray[][50], int size, int index){
    int limit = size - 1;
    for(int i=index; i<limit; i++){
        CopyString(stringArray[i+1], stringArray[i]);
    }
    stringArray[limit][0] = 0;
}

int RemoveDublicates(char array[][50], int arraySize){
    for(int i=0; i<arraySize; i++){
        for(int j=i+1; j<arraySize; j++){
            if(CompareString(array[i], array[j])){
                RemoveStringElement(array, arraySize, j);
                arraySize -= 1;
                j--;
            }
        }
    }
    return arraySize;
}

void PrintData(char data[][50], int dataCount){
    for(int i=0; i<dataCount; i++){
        printf("%s\n", data[i]);
    }
}

int main() {
    char data[10][50] = {
        "apple",
        "banana",
        "Apple",    
        "banana",  
        "orange",
        "grape",
        "apple",    
        "banana",   
        "",         
        "grape"     
    };

    int originalSize = 10;

    printf("Original Data:\n");
    PrintData(data, originalSize);

    int newSize = RemoveDublicates(data, originalSize);

    printf("\nAfter Removing Duplicates:\n");
    PrintData(data, newSize);

    return 0;
}

