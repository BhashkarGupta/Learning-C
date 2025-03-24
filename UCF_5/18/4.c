// Write a program to for the pattern in the question 
// grid height should be upto 9
#include<stdio.h>
int main(){
    int gridHeight = 9, gridLenght = (gridHeight * 2) - 1 ;
    for (int i = 1; i <= gridHeight; i++)
    {
        int temp = 0, decValue = 0;
        for (int j = 1; j <= gridLenght; j++)
        {
            if ((gridHeight+1-i)<=j && (gridHeight-1+i)>=j)
            {
                if (temp<i && decValue==0)
                {
                    temp++;
                }else{
                    temp--;
                    decValue = 1;
                }
                printf("%d ", temp);
            }else{
                printf("  ");
            } 
        }
        printf("\n");
    }
    return 0;
}