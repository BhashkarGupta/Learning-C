// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], oddSum=0, evenSum=0;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        if(list[i]%2 == 0){
            evenSum += list[i];
        }else{
            oddSum += list[i];
        }
    }

    printf("Even Sum = %d\n", evenSum );
    printf("Odd Sum = %d\n", oddSum);
    return 0;
}