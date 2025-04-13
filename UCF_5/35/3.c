// Write a program in C to count the total number of alphabets, digits and special characters in a string. 
#include<stdio.h>

void CountDifferentCharacters(char str []){
    int i = 0, alphabets = 0, digit = 0, specialCharacters = 0;
    while (str[i] != 0)
    {
        switch (str[i])
        {
        case 65 ... 90:
        case 97 ... 122:
            alphabets++;
            break;
        
        case 48 ... 57:
            digit++;
            break;

        default:
            specialCharacters++;
            break;
        }
        i++;
    }
    printf("Alphabets : %d\n", alphabets);
    printf("Digits: %d\n", digit);
    printf("Special Character: %d\n", specialCharacters);
}

int main(){
    char str[] = "121. This Is The 'Sample' String.";
    CountDifferentCharacters(str);
    return 0;
}