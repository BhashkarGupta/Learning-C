// Write a function to reverse a string word wise. (For example if the given string is
// "Mysirg Education Services" then the resulting string should be "Services Education
// Mysirg" )
#include<stdio.h>

void CopyString(char str1 [], char str2[]){
    int count = 0;
    while (str1[count] != 0)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        str2[i] = str1[i];
    }
}

void ReverseString(char str[]){
    int count = 0, tempPointer, tempStringPointer;
    while(str[count] != 0){
        count++;
    }
    char tempString[count];
    tempString[count] = 0;
    count--;
    tempPointer = count;
    tempStringPointer = 0;
    for(int i=count; i>=0; i--){
        if(str[i] == ' '){
            for(int j=i+1; j<=tempPointer; j++, tempStringPointer++){
                tempString[tempStringPointer] = str[j];
            }
            tempString[tempStringPointer] = ' ';
            tempStringPointer++;
            tempPointer = i - 1;
        }
    }
    for(int j=0; j<=tempPointer; j++, tempStringPointer++){
        tempString[tempStringPointer] = str[j];
    }
    puts(tempString);
    CopyString(tempString, str);
}

int main(){
    char str[] = "This is a string";
    ReverseString(str);
    puts(str);
    return 0;
}
