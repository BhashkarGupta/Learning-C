// WAP to find the area of the circle. Take radius of circle from user as input.
#include<stdio.h>
int main(){
    int radius;
    float pi = 3.14;
    printf("Please Enter the radius of circle: ");
    scanf("%d", &radius);
    printf("The sum of these two number is %.2f", pi * radius * radius);
    return 0;
}