// Write a function to make acronym name from a given name. For example, "Ramesh
// Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"
#include<stdio.h>

char Capitalize(char c){
    if(c >= 97 && c <= 122){
        return c - 32;
    }else{
        return c;
    }
}

void Acronym(char str[]){
    char acronymString[50];
    int count = 0, latNamePointer = 0, temp = 1;
    while(str[count] != 0){
        if(str[count] == ' ' && str[count+1] != 0){
            latNamePointer = count + 1;
        }
        count++;
    }
    acronymString[0] = Capitalize(str[0]);
    if(latNamePointer != 0){
        for(int i=1; i<latNamePointer; i++){
            if(str[i] == ' '){
                acronymString[temp] = str[i];
                temp++;
                i++;
                acronymString[temp] = Capitalize(str[i]);
                temp++;
            }
        }
    }
    for(int j = latNamePointer+1; j<count; j++, temp++){
        acronymString[temp] = str[j];
    }
    acronymString[temp] = 0;
    puts(acronymString);
}

int main(){
    char str[] = "bhashkar kumar gupta";
    Acronym(str);
    return 0;
}
