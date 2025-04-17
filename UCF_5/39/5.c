// Write a function to concatenate two strings.
#include<stdio.h>

void ConcatenateString(char str1[], char joiningCharacter, char str2[]){
    int count1 = 0, count2 = 0;
    while(str1[count1] != 0){
        count1++;
    }
    while(str2[count2] != 0){
        count2++;
    }
    char concatenatedString[count1 + count2 + 2];
    concatenatedString[count1 + count2 + 1] = 0;
    for(int i=0; i < count1; i++){
        concatenatedString[i] = str1[i];
    }
    concatenatedString[count1] = joiningCharacter;
    for(int i = 0; i < count2; i++){
        concatenatedString[i + count1 + 1] = str2[i];
    }
    puts(concatenatedString);
}

int main(){
    char str1[] = "this is the string1";
    char str2[] = "this is string2";
    ConcatenateString(str1, ' ', str2);
    return 0;
}
