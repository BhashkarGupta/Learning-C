// Write a program which takes the lenght of the sides of a triangle as an input. Display whether the triangle is valid or not. 
#include<stdio.h>
int main(){
    float side1, side2, side3;
    printf("Please provide the sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    if (side1 + side2 <= side3)
    {
        printf("Not a valid sides of a tringle\n");
    }
    else if (side2 + side3 <= side1)
    {
        printf("Not a valid sides of a tringle\n");
    }
    else if (side3 + side1 <= side2)
    {
        printf("Not a valid sides of a tringle\n");
    }
    else
    {
        printf("Valid triangle\n");
    }
    return 0;
}