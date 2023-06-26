#include<stdio.h>

void quickSort(int *array, int startIndex, int endIndex);

int main(){
    int array[] = {25, 68, 789, 3497, 744, 2, 3, 77, 6, 2, 44, 3, 0, 45};
    int arraySize = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, arraySize-1);
    printf("Sorted Array: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void quickSort(int *array, int startIndex, int endIndex){
    if(startIndex < endIndex)
    {
        int pivot = array[endIndex];
        int leftArrayPointer = startIndex;
        int buffer;
        for(int rightArrayPointer = startIndex; rightArrayPointer < endIndex; rightArrayPointer++){
            if(pivot > array[rightArrayPointer]){
                buffer = array[leftArrayPointer];
                array[leftArrayPointer] = array[rightArrayPointer];
                array[rightArrayPointer] = buffer;
                leftArrayPointer++;
            }
        }
        buffer = array[leftArrayPointer];
        array[leftArrayPointer] = pivot;
        array[endIndex] = buffer;

        quickSort(array, startIndex, leftArrayPointer-1);
        quickSort(array, leftArrayPointer+1, endIndex);
    }
}
