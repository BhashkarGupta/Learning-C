// Write a program to calculate volume of a cuboid.
#include<stdio.h>
int main(){
    float lenght, width, height;
    printf("Please enter the lenght of cubiodal: ");
    scanf("%f", &lenght);
    printf("Please enter the width of cubiodal: ");
    scanf("%f", &width);
    printf("Please enter height of cubiodal: ");
    scanf("%f", &height);
    printf("Simple Interest would be %.2f", lenght * width * height);
    return 0;
}