// calculate the Area or perimeter of Square, circle and rectangle. 
#include<stdio.h>

int main();

// Function Declaration
float square(char operation);
float circle(char operation);
float rectangle(char operation);

int main()
{
    char shape, operation;
    float result;
    printf("Please select a shape - Square, Circle or Rectangle(S, C, R): ");
    scanf(" %c", &shape);
    printf("Please select operation - Area or Perimeter(A, P): ");
    scanf(" %c", &operation);
    if (shape == 'S'){
        result = square(operation);
    }
    else if (shape == 'C')
    {
        result = circle(operation);
    }
    else if (shape == 'R'){
        result = rectangle(operation);
    }
    else{
        printf("Invalid Shape choice. Please try again.\n");
    }
    printf("Result: %f\n", result);
    return 0;
}

// Functions 

float square(char operation)
{
    float side, result;
    printf("Please input the side of square(cm): ");
    scanf("%f", &side);
    if (operation == 'P'){
        result = 4 * side;
    }
    else if (operation == 'A')
    {
        result = side * side;
    }
    else{
        printf("Invalid operation!\n");
        result = 0;
    }
    return result;
}

float circle(char operation)
{
    float radius, result;
    printf("Please input the radius of circle(cm): ");
    scanf("%f", &radius);
    if (operation == 'P'){
        result = 2 * 3.14 * radius;
    }
    else if (operation == 'A')
    {
        result = 3.14 * radius * radius;
    }
    else{
        printf("Invalid operation!\n");
        result = 0;
    }
    return result;
}

float rectangle(char operation)
{
    float length, width, result;
    printf("Please input the lenght of rectangle(cm): ");
    scanf("%f", &length);
    printf("Please input the width of rectangle(cm): ");
    scanf("%f", &width);
    if (operation == 'P'){
        result = 2 * (length + width);
    }
    else if (operation == 'A')
    {
        result = length * width;
    }
    else{
        printf("Invalid operation!\n");
        result = 0;
    }
    return result;
}

/*use "" for string and '' for a single character ('S'- single character, "This is a string")*
 user " %d" for scanf if you have \n character above its line/
