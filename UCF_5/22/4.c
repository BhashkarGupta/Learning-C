//Write a function to check whether a given number contains a given digit or not.
#include<stdio.h>

int CheckDigit(int num, int digit){
    while(num/10 != 0){
        if(num%10 == digit){
            return 1;
        }else{
            num /= 10;
        }
    }
    if (num == digit) {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int num, digit;
    printf("Please enter the number: ");
    scanf("%d", &num);
    printf("Please enter the digit: ");
    scanf("%d", &digit);
    if(CheckDigit(num, digit)){
        printf("The number %d contains the given digit %d\n", num, digit);
    }else{
        printf("The number %d does not contain the given digit %d\n", num, digit);
    }
    return 0;
}