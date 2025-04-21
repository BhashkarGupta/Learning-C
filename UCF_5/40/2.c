// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>

void FriendsArray(char frinedsName[][50], int friendsCount){
    printf("Please Enter your %d Friends Name: \n", friendsCount);
    for(int i=0; i<friendsCount; i++){
        fgets(frinedsName[i], 50, stdin);
        int j = 0;
        while(frinedsName[i][j] != '\n'){
            if(frinedsName[i][j] == 0){
                break;
            }
            j++;
        }
        if(frinedsName[i][j] == '\n'){
            frinedsName[i][j] = 0;
        }
    }
}

int CountVowels(char str[]){
    int count = 0, c = 0;
    char vowels[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    while (str[c] != 0){
        for (int i = 0; i < 10; i++)
        {
            if (str[c] == vowels[i])
            {
                count++;
                break;
            }
        }
        c++;
    }
    return count;
}

void PrintData(char data[][50], int dataCount){
    for(int i=0; i<dataCount; i++){
        printf("Vowel count in String %d is %d\n", i+1, CountVowels(data[i]));
    }
}

int main(){
    int numberOfFriends;
    printf("How many friends do you have?\n");
    scanf("%d", &numberOfFriends);
    getchar();//to cusume new line character from the input buffer which otherwise will be taken by the next fgets
    char data[numberOfFriends][50];
    FriendsArray(data, numberOfFriends);
    printf("\nVowel Counts: \n");
    PrintData(data, numberOfFriends);
    return 0;
}
