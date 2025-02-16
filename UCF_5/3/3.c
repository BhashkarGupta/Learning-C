// Write a program to input three characters from the user and display character with their correspoding ASCII codes.
#include<stdio.h>
int main(){
    char first_input, second_input, third_input;
    printf("Please enter 3 characters: ");
    scanf("%c %c %c", &first_input, &second_input, &third_input);
    printf("%d - %c\n%d - %c\n%d - %c\n", first_input, first_input, second_input, second_input, third_input, third_input);
    return 0;
}