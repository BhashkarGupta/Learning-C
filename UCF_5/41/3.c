// Write a function to check whether a pair of strings are anagram or not. Both the strings are stored in a 2d char array.
#include<stdio.h>

void ToLowerCase(char str []){
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
}

void CountCharacters(char str[], int counter[128]){
    int count = 0;
    for(int i=0; i<128; i++){
        counter[i] = 0;
    }
    while(str[count] != 0){
        int temp = str[count];
        counter[temp] += 1;
        count++;
    }
}

int IfAnagrams(char str1[], char str2[]){
    int str1Counter[128], str2Counter[128];
    ToLowerCase(str1);
    ToLowerCase(str2);
    CountCharacters(str1, str1Counter);
    CountCharacters(str2, str2Counter);
    for(int i=97; i<=122; i++){
        if(str1Counter[i] != str2Counter[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str1[] = "elbow";
    char str2[] = "below";
    char str3[] = "elbows";
    printf("'%s' and '%s' are anagram: %s\n", str1, str2, IfAnagrams(str1, str2) ? "True" : "False");
    printf("'%s' and '%s' are anagram: %s\n", str3, str2, IfAnagrams(str3, str2) ? "True" : "False");
    return 0;
}
