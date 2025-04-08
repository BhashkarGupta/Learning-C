// Write a function to count the frequency of each element of an array.
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

void elementFrequency(int list[], int size){
    SortArray(list, size);
    int temp, frequencyCounter;
    temp = list[0];
    frequencyCounter = 1;
    for(int i=1; i<size; i++){
        if(list[i] == temp){
            frequencyCounter++;
        }else{
            printf("%d = %d times\n", temp, frequencyCounter);
            temp = list[i];
            frequencyCounter = 1;
        }
    }
    printf("%d = %d times\n", temp, frequencyCounter);
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    elementFrequency(array, 10);
    return 0;
}
