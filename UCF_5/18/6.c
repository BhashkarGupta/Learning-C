// Write a program to for the pattern in the question 
#include<stdio.h>
int main(){
    int gridHeight = 4, gridLenght = (gridHeight * 2) - 1 ;
    for (int i = gridHeight; i >= 1; i--)
    {
        int temp = 64, decValue = 0;
        for (int j = 1; j <= gridLenght; j++)
        {
            if ((gridHeight+1-i)<=j && (gridHeight-1+i)>=j)
            {
                if ((temp-64)<i && decValue==0)
                {
                    temp++;
                }else{
                    temp--;
                    decValue = 1;
                }
                printf("%c ", temp);
            }else{
                printf("  ");
            } 
        }
        printf("\n");
    }
    return 0;
}


// // Write a program to for the pattern in the question 
// #include<stdio.h>
// int main(){
//     int gridHeight = 4, gridLenght = (gridHeight * 2) - 1 ;
//     int less = 1 , more = gridLenght;
//     for (int i = 1; i <= gridHeight; i++)
//     {
//         int alphaCounter = 65, decValue = 0;
//         for (int j = 1; j <= gridLenght; j++)
//         {
//             if (j >= less && j<= more)
//             {
//                 if ((alphaCounter-65)<i && decValue == 0)
//                 {
//                     alphaCounter++;
//                 }else{
//                     alphaCounter--;
//                     decValue = 1;
//                 }
//                 printf("%c ", alphaCounter);
//             }else{
//                 printf("  ");
//             }
//         }            
//         more--;
//         less++;
//         printf("\n");
//     }
    
//     return 0;
// }