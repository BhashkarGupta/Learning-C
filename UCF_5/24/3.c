// Write a function to print PASCAL Triangle.
#include<stdio.h>

int Factorical(int num){
    int result = 1;
    while(num > 1){
        result *= num;
        num--;
    }
    return result;
}

int CellValue(int x, int y){
    int result = Factorical(y-1)/(Factorical(x-1)*Factorical(y-x));
    return result;
}

void PascalTriangle(int height){
    int lenght = 2*height - 1;
    int printHead = lenght/2 + 1;
    for(int i = 1; i <= height; i++){
        int printCounter = 1;
        for(int j = 1; j <= lenght; j++){
            if(j >= printHead && j < (printHead+i)){
                printf(CellValue(printCounter, i)<=9 ? "%d   " : "%d  ", CellValue(printCounter, i));
                printCounter++;
            }else{
                printf("  ");
            }
        }
        printf("\n");
        printHead--;
    }

}

int main(){
    int userInput;
    printf("Please enter height of Pascal's Triangle: ");
    scanf("%d", &userInput);
    PascalTriangle(userInput);
    return 0;
}