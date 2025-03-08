// Write a program to print all Prime numbers under 100
#include<stdio.h>
int main(){
    int temp;
    printf("Prime numbers are: ");
    for(int i = 1; i < 100; i++)
    {
        for(temp = 2; temp < i; temp++)
        {
            if(i % temp == 0)
            {
                break;
            }
        }
        if(temp == i){
            printf("%d ", temp);
        }
    }
    return 0;
}