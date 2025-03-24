// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    int gridHeight = 4, gridLenght = (gridHeight * 2) - 1 ;
    int less , more;
    less = more = 1 + (gridLenght / 2);
    for (int i = 1; i <= gridHeight; i++)
    {
        for (int j = 1; j <= gridLenght; j++)
        {
            if (j > less && j< more)
            {
                printf("  ");
            }else{
                printf("* ");
            }
        }            
        more++;
        less--;
        printf("\n");
    }
    
    return 0;
}