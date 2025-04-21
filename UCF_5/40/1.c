// Write a function to store strings, taken from user, to the given 2d char array.
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

void PrintData(char data[][50], int dataCount){
    for(int i=0; i<dataCount; i++){
        puts(data[i]);
    }
}

int main(){
    int numberOfFriends;
    printf("How many friends do you have?\n");
    scanf("%d", &numberOfFriends);
    getchar();//to cusume new line character from the input buffer which otherwise will be taken by the next fgets
    char data[numberOfFriends][50];
    FriendsArray(data, numberOfFriends);
    printf("\nSo your Friends are: \n");
    PrintData(data, numberOfFriends);
    return 0;
}
