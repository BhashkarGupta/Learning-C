// Write a program to find Max and Min from a string. 
#include<stdio.h>

void minMax(int *arr, int *min, int *max);

int main(){
    int string[] = {2, 25, 78, 66, 97, 34, 5, 12, 35, 27, 107, 687};
    int max, min;
    minMax(string, &min, &max);
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}

void minMax(int *arr, int *min, int *max){
    *max = *min = arr[0]; // setting value of min and max to the value of 0th index initially
    int *ptr = arr; // copying the starting address of array to the pointer
    int size = 0;

    while (*(ptr + size) != '\0') {
        size++; // finding out the size of array first
    }

    for(int i = 1; i < size; i++){
        if(*max < *(ptr+i)){ // if value at max is less that the current index value, replace it
            *max = *(ptr+i);
        }
        if(*min > *(ptr+i)){ // if value at min is greater than the current index value, replace it.
            *min = *(ptr+i);
        }
    }
}