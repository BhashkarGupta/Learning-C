// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ] 
#include<stdio.h>

void sort(int *ptr,int size){
    int bubbleSize = size - 1;
    int swapDetector = 1, temp;
    while (swapDetector)
    {
        swapDetector = 0;
        for (int i = 1; i <= bubbleSize; i++)
        {
            if (*(ptr+i) < *(ptr+i-1))
            {
                temp = *(ptr+i-1);
                *(ptr+i-1) = *(ptr+i);
                *(ptr+i) = temp;
                swapDetector++;
            } 
        }
        bubbleSize--;
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    sort(arr, size); 

    printf("\nSorted array:   ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}