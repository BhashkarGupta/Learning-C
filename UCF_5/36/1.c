// Write a function to calculate length of the string 
#include<stdio.h>

int StringLenght(char str[]){
    int count = 0;
    while (str[count] != 0)
    {
        count++;
    }
    return count;
}

int main(){
    char str[] = "This is a string";
    printf("String length = %d\n", StringLenght(str));
    return 0;
}
