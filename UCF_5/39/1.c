// Write a function to count frequency of each character of the given string.
#include<stdio.h>

void CountCharacters(char str[]){
    int count = 0;
    int counter[128][2];
    for(int i=0; i<128; i++){
        counter[i][0] = i;
        counter[i][1] = 0;
    }
    while(str[count] != 0){
        for(int i=0; i<128; i++){
            if(str[count] == counter[i][0]){
                counter[i][1] += 1;
            }
        }
        count++;
    }
    for(int i=0; i<128; i++){
        if(counter[i][1] > 0){
            printf("'%c' = %d\n", counter[i][0], counter[i][1]);
        }
    }
}

int main(){
    char str[] = "This is an example of string";
    CountCharacters(str);
    return 0;
}
