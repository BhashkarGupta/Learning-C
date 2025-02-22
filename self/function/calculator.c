// Building a simple calulator
#include<stdio.h>

// Declaration 
int sum(int a, int b);
int substract(int a, int b);
int multiplication(int a, int b);
int divide(int a, int b);

// Main Function
int main()
{
    int x, y, result;
    char operation;
    printf("This is a Basic Calculator\n");
    printf("Please enter the first Number: \n");
    scanf("%d", &x);
    printf("Please enter the second Number: \n");
    scanf("%d", &y);
    printf("Please select the Operation (+, -, *, /): \n");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        result = sum(x, y);
        break;
    case '-':
        result = substract(x, y);
        break;
    case '*':
        result = multiplication(x, y);
        break;
    case '/':
        result = divide(x, y);
        break;
    default:
        operation = 'i';
        break;
    }
    if (operation == 'i'){
        printf("Sorry! This operation is not supported\n");
    }
    else{
        printf("Result: %d\n", result);
    }
    return 0;
}
// Functions 
int sum(int a, int b){
    return a + b;
}
int substract(int a, int b){
    return a - b;
}
int multiplication(int a, int b){
    return a * b;
}
int divide(int a, int b){
    return a / b;
}


/*
old code ( line 21) :    scanf("%c", &operation);
new code :     scanf(" %c", &operation);
Your code seems fine at first glance, but there is one potential issue that could occur when you run it.
The issue is with the scanf function used to read the operator. When the user inputs the first number, they also press the Enter key, which generates a newline 
character (\n). This newline character is still in the input buffer when scanf is called again to read the operator. As a result, scanf reads the newline character 
instead of the operator, and the program skips the switch statement and goes straight to the if statement, printing the "Sorry! This operation is not supported" message.
To fix this issue, you can add a space before the %c format specifier in the scanf function used to read the operator. This space tells scanf to ignore any 
whitespace characters (such as newline characters) in the input buffer before reading the operator. Here's the corrected line of code:
c
Copy code
scanf(" %c", &operation);
Note the space before %c. This should fix the issue and allow your program to work correctly.
*/