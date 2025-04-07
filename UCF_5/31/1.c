// Write a function to find the greatest number from the given array of any size. 
#include<stdio.h>

void TakeUserInput(int list[], int size){
    printf("Please enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

int GreatestNumber(int list[], int size){
    int greatestNumber = list[0];
    for (int i = 1; i < size; i++)
    {
        greatestNumber = greatestNumber<list[i] ? list[i]: greatestNumber;
    }
    return greatestNumber;  
}

int main(){
    int array[10];
    TakeUserInput(array, 10);
    printf("Greatest number in the array is %d\n", GreatestNumber(array, 10));
    return 0;
}
