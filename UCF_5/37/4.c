// Write a function to swap two characters of a given string with specified indices
#include<stdio.h>

void SwapCharacter(char str[], int index1, int index2){
    int count = 0;
    char temp;
    while (str[count] != 0)
    {
        count++;
    }
    if (index2 > count)
    {
        printf("invalid Index, please check\n");
    }else{
        temp = str[index1];
        str[index1] = str[index2];
        str[index2] = temp;
    } 
}

int main(){
    char str[] = "This is a string";
    SwapCharacter(str, 2, 10);
    puts(str);
    return 0;
}
