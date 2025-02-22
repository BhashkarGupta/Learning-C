// Create a function to return a reverse array.
#include<stdio.h>

// simply swaping the ith element with n-1-i element
void reverseArray(int *array, int size){
    int length = size / 2;
    for(int i = 0; i < length; i++){ // swaping the value of i element with n-1-i 
        int buffer = array[size - 1 - i];
        array[size - 1 -i] = array[i];
        array[i] = buffer;
    }
}

int main(){
    int array[] = {25, 68, 789, 3497, 744, 2, 3, 77, 6, 2, 44, 3, 0};
    int arraySize = sizeof(array)/sizeof(array[0]);
    reverseArray(array, arraySize);
    printf("Reverse Array: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}