// Create a program for Temperature conversion
#include<stdio.h>

// Function declaration
float deg2fer(float temp);
float fer2deg(float temp);

// Main Function
int main(){
    int operation;
    float conversion_output, user_input;
    printf("Please select the Operation(1 or 2):\n");
    printf("1. Degree Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Degree Celsius\n");
    scanf(" %d", &operation);
    if (operation == 1){
        printf("Please enter the temperature in Degree Celsius:");
        scanf("%f", &user_input);
        conversion_output = deg2fer(user_input);
        printf("%f Degree Celsius is equals to %f Fahrenheit.\n", user_input, conversion_output);
    }
    else if (operation == 2){
        printf("Please enter the temperature in Fahrenheit:");
        scanf("%f", &user_input);
        conversion_output = fer2deg(user_input);
        printf("%f Fahrenheit is equal to %f Degree Celsius.\n", user_input, conversion_output);
    }
    else{
        printf("Invalid Input Operation!");
    }
    return 0;
}

// Function
float deg2fer(float temp){
    float result;
    result = ((temp * 9)/5) + 32;
    return result;
}

float fer2deg(float temp){
    float result;
    result = (temp - 32) * (5/9);
    return result;
}