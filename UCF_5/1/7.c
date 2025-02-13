// Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
#include<stdio.h>
int main(){
    int first_num, second_num;
    printf("Please Enter the first Number: ");
    scanf("%d", &first_num);
    printf("Please Enter the second Number: ");
    scanf("%d", &second_num);
    printf("The sum of these two number is %d", first_num + second_num);
    return 0;
}