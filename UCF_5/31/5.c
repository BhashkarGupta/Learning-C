// Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element
#include<stdio.h>

void TakeUserInput(int list[], int size){
    printf("Please enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

int FindAdjacentDuplicate(int array[], int size){
    for (int i = 0; i < (size-1); i++)
    {
        if (array[i] == array[i+1])
        {
            return array[i];
        }
    }
    
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    printf("The first adjacent duplicate value in array is %d\n", FindAdjacentDuplicate(array, 10));
    return 0;
}
