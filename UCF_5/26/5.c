// Write a recursive function to print reverse of a given number
#include<stdio.h>

void PrintReverseNumber(int num){
    if(num/10 != 0){
        printf("%d", num%10);
        PrintReverseNumber(num/10);
    }else{
        printf("%d", num);
    }
}

int main(){
    PrintReverseNumber(35690);
    printf("\n");
    return 0;
}
