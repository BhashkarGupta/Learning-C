// Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29]) 
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

void RotateArray(int array[], int size, int noOfShift, int direction){
    int temp1, temp2;
    temp1 = array[size - noOfShift + 1];
    for (int i = 0; i < size; i++)
    {
        if (direction)
        {

        }
        
    }
    
}

int main(){
    printf("\n");
    return 0;
}
