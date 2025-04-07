// Write a program to sort an array of 10 elements in descending order.
#include<stdio.h>

int main(){
    int list[10], largestIndex, temp;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        largestIndex = i;
        for(int j=i; j<10; j++){
            largestIndex = list[j] > list[largestIndex] ? j : largestIndex;            
        }
        if (list[i] != list[largestIndex])
        {
            temp = list[i];
            list[i] = list[largestIndex];
            list[largestIndex] = temp;
        }
        
    }
    printf("The sorted array is: \n");
    for(int i=0; i<10; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}
