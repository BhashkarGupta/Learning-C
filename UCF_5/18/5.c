// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    int gridHeight = 4, gridLenght = (gridHeight * 2) - 1 ;
    int less = 1 , more = gridLenght;
    for (int i = 1; i <= gridHeight; i++)
    {
        int alphaCounter = 65;
        for (int j = 1; j <= gridLenght; j++)
        {
            if (j >= less && j<= more)
            {
                printf("%c ", alphaCounter);
                alphaCounter++;
            }else{
                printf("  ");
            }
        }            
        more--;
        less++;
        printf("\n");
    }
    
    return 0;
}