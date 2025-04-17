// Write a function to do case insensitive comparison of two strings.
#include<stdio.h>

int CompareString(char str1[], char str2[]){
    int count = 0;
    while(str1[count] != 0){
        count++;
    }
    for(int i=0; i<=count; i++){
        if(str1[i] == str2[i] || str1[i] == str2[i]+32 || str1[i] == str2[i]-32){
            continue;
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
    char str1[] = "This is a string 1";
    char str2[] = "This is a String";
    char str3[] = "this is a string";
    char str4[] = "this is a string.";
    printf("Case 1: %d\n", CompareString(str1, str2));
    printf("Case 2: %d\n", CompareString(str2, str3));
    printf("Case 3: %d\n", CompareString(str4, str3));
    return 0;
}
