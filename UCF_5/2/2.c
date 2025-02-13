// Write a program to calculate circumference of a circle.
#include<stdio.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("Please Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("Circumference of the circle is %.2f", 2 *pi * radius);
    return 0;
}