// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], greatestNumber=0;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        greatestNumber = greatestNumber>list[i] ? greatestNumber : list[i];
    }

    printf("The greatest number in the array is %d\n", greatestNumber );
    return 0;
}
