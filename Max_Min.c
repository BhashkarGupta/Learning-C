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
    *max = *min = arr[0];
    int *ptr = arr;
    int size = 0;

    while (*(ptr + size) != '\0') {
        size++;
    }

    for(int i = 1; i < size; i++){
        if(*max < *(ptr+i)){
            *max = *(ptr+i);
        }
        if(*min > *(ptr+i)){
            *min = *(ptr+i);
        }
    }
}
