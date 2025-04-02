// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    int gridHeight = 10, gridLenght = (gridHeight * 2) - 1 ;
    for (int i = 1; i <= gridHeight; i++)
    {
        int temp = 0;
        for (int j = 1; j <= gridLenght; j++)
        {
            if ((gridHeight+1-i)<=j && (gridHeight-1+i)>=j)
            {
                if (i%2 == 0)
                {
                    if (j%2==0)
                    {
                        printf("  ");
                    }else{
                        if (j == gridHeight+1 || j == gridHeight)
                        {
                            temp == 0 ? temp = 1 : temp;
                        }else if (j < gridHeight)
                        {
                            temp++;
                        }else{
                            temp--;
                        }
                        printf("%d ", temp);
                    }
                }else{
                    if (j%2==0)
                    {
                        j<=gridHeight ? temp++ : temp--;
                        printf("%d ", temp);
                    }else{
                        printf("  ");
                    }
                }
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
    return 0;
}