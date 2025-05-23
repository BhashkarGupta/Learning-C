// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>

void PrimeFactors(int num){
    printf("Prime factors of %d is ", num);
    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
            num /= i;
            i = 1;
        }
    }
}

int main(){
    int userInput;
    printf("Please enter a number to find it's Prime Factors: ");
    scanf("%d", &userInput);
    PrimeFactors(userInput);
    return 0;
}