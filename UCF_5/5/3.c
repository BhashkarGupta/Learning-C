// write a program to print size of an int, a float, a char and a double type variable. 
#include<stdio.h>
int main(){
    int myInt = 1;
    float myFloat = 2.1;
    char myChar = 'A';
    double myDouble = 1.1;
    printf("The size of Int is: %li\n", sizeof(myInt));
    printf("The size of Float is: %li\n", sizeof(myFloat));
    printf("The size of Char is: %li\n", sizeof(myChar));
    printf("The size of Double is: %li\n", sizeof(myDouble));
    return 0;
}