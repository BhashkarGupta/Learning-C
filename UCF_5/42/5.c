// Write a function to extract a substring from a given string with specified start index
// (inclusive) and end index (exclusive), and store the extracted string in another char
// array. [ void extract_string(char *str, int start_index, int end_index, char *result); ]
#include<stdio.h>

void extract_string(char *str, int start_index, int end_index, char *result){
    int resultIndexCoutner = 0;
    for(int i=start_index; i <= end_index; i++, resultIndexCoutner++){
        *(result + resultIndexCoutner) = *(str + i);
    }

}

int main(){
    char str[] = "Suddenly the world isn't lonely now, When you look at me, I can't come down";
    char result[50];
    extract_string(&str[0], 10, 30, &result[0]);
    puts(result);
    return 0;
}
