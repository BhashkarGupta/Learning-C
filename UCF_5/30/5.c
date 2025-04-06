// Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], copyList[10];
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        copyList[i] = list[i];
    }
    printf("The sorted array is: \n");
    for(int i=0; i<10; i++){
        printf("%d ", copyList[i]);
    }
    printf("\n");
    return 0;
}

