// Write a function to print all unique elements in an array.
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

void PrintUniqueElement(int list[], int size){
    SortArray(list, size);
    int temp = list[0];
    printf("All the unique elements on the array are:\n");
    for(int i=1; i<size; i++){
        if(temp != list[i]){
            printf("%d ", temp);
            temp = list[i];
        }
    }
    printf("%d\n", temp);
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    PrintUniqueElement(array, 10);
    return 0;
}
