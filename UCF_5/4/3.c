// Write a program with one char type variable. Assign 'A' in the variable. now change the value of the variable from 'A' to 'B' using increment operator.
#include<stdio.h>
int main(){
    char myChar = 'A';
    printf("myChar: %c - %d\n", myChar , myChar);
    myChar++;
    printf("myChar after increment operator: %c - %d\n", myChar, myChar);
    return 0;
}