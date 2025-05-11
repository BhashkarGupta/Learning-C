// Write a function to move first value of the array to the position where all smaller
// values will be in the left and greater values will be in the right.
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

void MoveToPivid(int *array, int size){
    sort(array+1, size-1);
    int i = 1, temp;
    while (*(array) > *(array+i))
    {
        i++;
    }
    temp = *(array+i-1);
    *(array+i-1) = *(array);
    *(array) = temp;
}

int main() {
    int arr[] = {7, 3, 9, 1, 6, 4, 2, 11, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    MoveToPivid(arr, size);

    printf("Array after moving pivot: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}