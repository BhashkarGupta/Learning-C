// Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], sum=0;
    float average=0;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    for(int i=0; i<10; i++){
        sum += list[i];
    }

    average = (float)sum/10;
    printf("The average of the given numbers is %0.2f\n", average );
    return 0;
}