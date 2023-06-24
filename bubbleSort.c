// Create an algorithm for shorting an array using bubble sort
#include<stdio.h>

void bubbleSort(int *array, int size){
    int count = size - 1;
    while (count != 0)
    {
        for (int i = 1; i <= count; i++)
        {
            if (array[i] < array[i -1])
            {
                int buffer = array[i];
                array[i] = array[i-1];
                array[i-1] = buffer;
            }
            
        }
        count -= 1;
    }
    
}

int main(){
    int array[] = {25, 68, 789, 3497, 744, 2, 3, 77, 6, 2, 44, 3, 0};
    int arraySize = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, arraySize);
    printf("Sorted Array: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}