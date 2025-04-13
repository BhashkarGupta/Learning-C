// Write a program to count vowels in a given string 
#include<stdio.h>

int CountVowels(char str[]){
    int count = 0, c = 0;
    char vowels[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    while (str[c] != 0){
        for (int i = 0; i < 10; i++)
        {
            if (str[c] == vowels[i])
            {
                count++;
                break;
            }
        }
        c++;
    }
    return count;
}

int main(){
    char str[] = "this is the sample string";
    printf("vowels count = %d\n", CountVowels(str));
    return 0;
}