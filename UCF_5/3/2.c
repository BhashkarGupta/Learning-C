// Write a program to input an ASCII code from the user and print its correponding character 
#include<stdio.h>
int main(){
    int user_input;
    printf("Please enter the ASCII code: ");
    scanf("%d", &user_input);
    if(user_input > -1 && user_input < 256){
        printf("The character for the ASCII code %d is '%c'\n", user_input, user_input);
    } else {
        printf("ERROR! The input should be betweek 0 and 255.\n");
    }
    return 0;
}