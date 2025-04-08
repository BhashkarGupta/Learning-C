// Write a function to swap two elements of given array with specified indices.
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

void ArraySwap(int list[], int index1, int index2){
    int temp;
    temp = list[index1];
    list[index1] = list[index2];
    list[index2] = temp;
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    ArraySwap(array, 2, 5);
    PrintArray(array, 10);
    return 0;
}
