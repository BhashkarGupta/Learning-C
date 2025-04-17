// Write a function to check whether a given string is palindrome or not.
#include<stdio.h>

int IsPalindrome(char str[]){
    int count = 0;
    while(str[count] != 0){
        count++;
    }
    for(int i=0; i<=count/2; i++){
        if(str[i] != str[count-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[] = "This is a string";
    char str1[] = "level";
    char str2[] = "racecar";
    printf("Case 1 = %d\n", IsPalindrome(str));
    printf("Case 2 = %d\n", IsPalindrome(str1));
    printf("Case 3 = %d\n", IsPalindrome(str2));
    return 0;
}
