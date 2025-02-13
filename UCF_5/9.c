// Write a program to calculate area of a rectangle. Input appropriate data from the user.
#include<stdio.h>
int main(){
    int lenght, width;
    printf("Please Enter the lenght of rectangle: ");
    scanf("%d", &lenght);
    printf("Please Enter the width of rectangle: ");
    scanf("%d", &width);
    printf("The area of rectangle is %d", lenght * width);
    return 0;
}