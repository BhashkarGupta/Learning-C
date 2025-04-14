// Write a function to find character in a given string between specified indices (start index (inclusive) and end index(exclusive). 
#include<stdio.h>

int FindCharacter(char str[], char character, int startingPosition, int endingPosition){
    int count = -1, i = startingPosition;
    while (i != endingPosition)
    {
        if (str[i] == character)
        {
            count = i+1;
            return count;
        }
        i++;
    }
    return count;
}

int main(){
    char str[] = "this is the #sample string";
    printf("character position: %d\n", FindCharacter(str, '#', 2, 15));
    return 0;
}