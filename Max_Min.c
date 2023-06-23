// Write a program to find Max and Min from a string. 
#include<stdio.h>

int main(){
    int string[] = {2, 25, 78, 66, 97 ,34 ,5, 12 ,35, 27, 107, 687};
    int max, min = string[0];
    int* ptr = string;
    int strlen = sizeof(string)/sizeof(string[0]);

    for(int i = 1; i < strlen ; i++){
        if(max < *(ptr+i)){
            max = *(ptr+i);
        }
        if(min > *(ptr+i)){
            min = *(ptr+i);
        }
    }
    printf("Max: %d, Min: %d\n", max, min);

}