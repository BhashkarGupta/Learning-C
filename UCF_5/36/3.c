// Write a function to compare two strings. 
#include<stdio.h>

int CompareString(char str1[], char str2[]){
    int count = 0;
    while (str1[count] != 0)
    {
        if (str1[count] != str2[count])
        {
            return 0;
        }
        count++;
    }
    if (str1[count] != str2[count])
    {
        return 0;
    }
    return 1;
}

int main(){
    char str[] = "This is a string";
    char str1[] = "This is another string";
    char str2[] = "This is a string";
    char str3[] = "This is a string which is different";
    printf("Case 1: %d\n", CompareString(str, str1));
    printf("Case 2: %d\n", CompareString(str, str2));
    printf("Case 3: %d\n", CompareString(str, str3));
    return 0;
}
