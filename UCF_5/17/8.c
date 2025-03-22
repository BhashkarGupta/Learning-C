// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    int count = 1;
    for(int i=1; i<=4; i++){
        for (int j = i; j > 0; j--)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}