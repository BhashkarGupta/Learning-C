// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    int gridHeight = 9, gridLenght = (gridHeight * 2) - 1 ;
    for (int i = 1; i <= gridHeight; i++)
    {
        for (int j = 1; j <= gridLenght; j++)
        {
            if ((gridHeight+1-i)<=j && (gridHeight-1+i)>=j)
            {
                if (i%2 != 0)
                {
                    printf(j%2==0 ? "  " : "* ");
                }else{
                    printf(j%2==0 ? "* " : "  ");
                }
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}