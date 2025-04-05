// Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], smallestNumber;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    smallestNumber = list[0];
    for(int i=0; i<10; i++){
        smallestNumber = smallestNumber<list[i] ? smallestNumber : list[i];
    }

    printf("The smallest number in the array is %d\n", smallestNumber );
    return 0;
}