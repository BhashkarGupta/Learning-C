// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    for(int i=2; i<=6; i++){
        for (int j = 1; j < i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}