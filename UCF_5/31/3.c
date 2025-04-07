// Write a function to sort an array of any size. 
#include<stdio.h>

void TakeUserInput(int list[], int size){
    printf("Please enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

void PrintArray(int list[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
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

int main(){
    int array[10];
    TakeUserInput(array, 10);
    SortArray(array, 10);
    printf("Sorted array: \n");
    PrintArray(array, 10);
    return 0;
}
