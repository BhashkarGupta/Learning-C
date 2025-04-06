// Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], largest = 0, secondLargest = 0;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (largest<list[i])
        {
            secondLargest = largest;
            largest = list[i];
        }
    }
    
    printf("The second largest number in the array is %d\n", secondLargest);
    return 0;
}
