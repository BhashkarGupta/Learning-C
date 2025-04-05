// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], sum=0;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        sum += list[i];
    }
    printf("The sum of the given numbers is %d\n", sum );
    return 0;
}
