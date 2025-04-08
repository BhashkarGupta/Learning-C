// Write a function to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)
#include<stdio.h>

void TakeUserInput(int list[], int size){
    printf("Please enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

void SortArray(int list[], int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        int smallestIndex = i;
        for (int j = i; j < size; j++)
        {
            smallestIndex = list[smallestIndex]>list[j] ? j : smallestIndex;
        }
        temp = list[i];
        list[i] = list[smallestIndex];
        list[smallestIndex] = temp;
    } 
}

int NumberOfDuplicateElements(int array[], int size){
    SortArray(array, size);
    int temp = array[0], dubplicateCounter = 0, tempCounter = 0;
    for(int i=1; i<size; i++){
        if(temp == array[i]){
            tempCounter++;
            if(tempCounter == 1){
                dubplicateCounter++;
            }
        }else{
            temp = array[i];
            tempCounter = 0;
        }
    }
    return dubplicateCounter;
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    printf("Number of dublicate elements in this array is %d\n", NumberOfDuplicateElements(array, 10));
    return 0;
}