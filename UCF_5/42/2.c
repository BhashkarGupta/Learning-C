// Write a function to search all occurrences of a given character in a given string. 
// Result of search is a list of indices to be stored in the given array. 
// [ void search_all_occurrences(char *str, char ch, int *arr); ]
#include<stdio.h>

void search_all_occurrences(char *str, char ch, int *arr){
    int strIndexCounter = 0, resultCounter = 0;
    while(*(str + strIndexCounter) != 0){
        if(*(str + strIndexCounter) == ch){
            *(arr + resultCounter) = strIndexCounter;
            resultCounter++;
        }
        strIndexCounter++;
    }
}

int main(){
    char str[] = "This is an example of a string";
    int resultantIndexArray[50] = {0};
    search_all_occurrences(&str[0], 'i', &resultantIndexArray[0]);
    printf("The given character orrucrs at the following position:\n");
    for(int i=0; resultantIndexArray[i] > 0; i++){
        printf("%d ", resultantIndexArray[i]);
    }
    printf("\n");
    return 0;
}
