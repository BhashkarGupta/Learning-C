// Write a function to return the most repeating character in a list of strings.
#include<stdio.h>

void MostRepeatingCharacter(char data[][100], int numberOfString){
    int charCounter[128];
    for(int i=0; i<128; i++){
        charCounter[i] = 0;
    }
    int maxCharCount = 0, maxChar = 0;
    for(int i=0; i<numberOfString; i++){
        int counter = 0;
        while(data[i][counter] != 0){
            int temp = data[i][counter];
            charCounter[temp] += 1;
            counter++;
        }
    }
    for(int i=0; i<128; i++){
        if(maxCharCount < charCounter[i]){
            maxCharCount = charCounter[i];
            maxChar = i;
        }
    }
    printf("The character '%c' is the most used character in the data and it has been used %d times\n", maxChar, maxCharCount);
}


int main(){
    char data1[3][100] = {"hello", "world", "test"};
    printf("Test Case 1:\n");
    MostRepeatingCharacter(data1, 3);

    char data2[2][100] = {"aaaa", "aaab"};
    printf("Test Case 2:\n");
    MostRepeatingCharacter(data2, 2);

    char data3[3][100] = {"abc", "bcd", "cde"};
    printf("Test Case 3:\n");
    MostRepeatingCharacter(data3, 3);

    char data4[2][100] = {"AaAa", "aA"};
    printf("Test Case 4:\n");
    MostRepeatingCharacter(data4, 2);

    char data5[2][100] = {"!@#", "@@@"};
    printf("Test Case 5:\n");
    MostRepeatingCharacter(data5, 2);

    return 0;
}
