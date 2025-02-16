// WAP to find the area of the circle. Take radius of circle from user as input.
#include<stdio.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("Please Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("Area of the circle is %.2f\n", pi * radius * radius);
    return 0;
}