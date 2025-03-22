// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        for (int j = i; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}