// Write a function to find the smallest number from the given array of any size. 
#include<stdio.h>

void TakeUserInput(int list[], int size){
    printf("Please enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

int SmallestNumber(int list[], int size){
    int smallestNumber = list[0];
    for (int i = 1; i < size; i++)
    {
        smallestNumber = smallestNumber>list[i] ? list[i]: smallestNumber;
    }
    return smallestNumber;  
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    printf("Smallest number in the array is %d\n", SmallestNumber(array, 10));
    return 0;
}