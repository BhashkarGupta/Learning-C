// Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main(){
    int userInput1, userInput2, temp = 2, HCF = 1;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    while(userInput1 >= temp && userInput2 >= temp){
        if((userInput1 % temp == 0) && (userInput2 % temp == 0)){
            userInput1 /= temp;
            userInput2 /= temp;
            HCF *= temp;
            temp = 1;
        }
        temp++;
    }
    HCF == 1 ? printf("Both of the given numbers are co prime.") : printf("Both of the given numbers are not co prime\n");
    printf("As HCF of the given numbers is: %d", HCF);
}