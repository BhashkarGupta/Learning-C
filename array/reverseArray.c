// Write a function to reverse an array. 
#include<stdio.h>

void reverseArray(int array[], int lenghtOfArray);

int main(){
    int array1[] = {1, 2, 3, 4, 5, 6};
    int array2[] = {1, 2, 3, 4, 5, 6, 7};
    reverseArray(array1, 6);
    reverseArray(array2, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\t", array2[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", array1[i]);
    }
    printf("\n");
    return 0;
}

void reverseArray(int array[], int lenghtOfArray){
    int buffer, halfLengthOfArray; 
    halfLengthOfArray = lenghtOfArray / 2;

    for (int i = 0; i < halfLengthOfArray; i++){
        buffer = array[i];
        array[i] = array[lenghtOfArray - 1 - i];
        array[lenghtOfArray - 1 - i] = buffer;
    }
    return;
}