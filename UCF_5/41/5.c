// A 2d array is full with 10 email ids. Write a function to find how many of them belongs to gmail.com
#include<stdio.h>

int ContainsString(char data[][50], int dataCount, char str[]){
    int result = 0;
    for(int i=0; i<dataCount; i++){
        int indexCounter = 0, strCounter = 0;
        while(data[i][indexCounter] != 0){
            if(data[i][indexCounter] == str[strCounter]){
                while(data[i][indexCounter] == str[strCounter] && data[i][indexCounter] != 0){
                    indexCounter++;
                    strCounter++;
                }
                if(str[strCounter] == 0){
                    result++;
                    break;
                }else{
                    strCounter = 0;
                }
            }
            indexCounter++;
        }
    }
    return result;
}

int main() {
    char emails[10][50] = {
        "alice@gmail.com",
        "bob@yahoo.com",
        "carol@gmail.com",
        "dave@outlook.com",
        "eve@gmail.com",
        "frank@hotmail.com",
        "grace@gmail.com",
        "heidi@aol.com",
        "ivan@gmail.com",
        "judy@yahoo.com"
    };

    char target[] = "gmail.com";
    int count = ContainsString(emails, 10, target);
    printf("Number of gmail accounts: %d\n", count);

    return 0;
}
