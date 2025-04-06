// Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], smallestIndex, temp;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        smallestIndex = i;
        for(int j=i; j<10; j++){
            smallestIndex = list[j] < list[smallestIndex] ? j : smallestIndex;            
        }
        if (list[i] != list[smallestIndex])
        {
            temp = list[i];
            list[i] = list[smallestIndex];
            list[smallestIndex] = temp;
        }
        
    }
    printf("The sorted array is: \n");
    for(int i=0; i<10; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}
