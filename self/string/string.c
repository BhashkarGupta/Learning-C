// Make a program thta inputs user's name & prints its length
#include<stdio.h>

int main(){
    char name[50];
    printf("Please enter your name:\n");
    fgets(name,50,stdin);

    int i = 0, letter_count = -1;
    while (name[i] != '\0')
    {
        i++;
        if (name[i] == ' '){
            continue;
        }
        letter_count++;
    }
    
    // puts(name);
    printf("Character Count of Name is %d\n", letter_count);

    return 0;
}