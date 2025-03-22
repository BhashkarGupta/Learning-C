// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    for(int i=5; i>0; i--){
        int count = 5 - i;
        for (int k = 0; k < count; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c ", j+65);
        }
        printf("\n");
    }
    return 0;
}