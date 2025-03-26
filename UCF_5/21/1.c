// Write a function to calculate the area of a circle.
#include<stdio.h>

float CircleArea(float radius){
    return 3.14 * radius * radius;
}

int main(){
    float userInput;
    printf("Please enter the radius of the circle: ");
    scanf("%f", &userInput);
    printf("Area of cirlce is %.2f", CircleArea(userInput));
    return 0;
}