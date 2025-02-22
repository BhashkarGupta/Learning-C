// Create an algorithm for shorting an array using bubble sort
#include<stdio.h>

void bubbleSort(int *array, int size){
    int count = size - 1;// cause it will run for n-1 time as comparing one no. with all others
    while (count != 0) // will run till no. of iteration reaches size-1
    {
        for (int i = 1; i <= count; i++) //starting from 1 index a comparing from previous one 
        {
            if (array[i] < array[i -1]) // checking if the previous element is bigger and if so replacing them
            {
                int buffer = array[i];
                array[i] = array[i-1];
                array[i-1] = buffer;
            }
            
        }
        count -= 1; // decreasing no. of iteration each time as last element is already sorted
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