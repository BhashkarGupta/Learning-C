// Write a function to calculate HCF of two numbers.
#include<stdio.h>

int HCF(int num1, int num2){
     int HCF = 1, temp = 2;
     while(num1 >= temp && num2 >= temp){
        if(num1%temp == 0 && num2%temp == 0){
            HCF *= temp;
            num1 /= temp;
            num2 /= temp;
            temp = 2;
        }else{
            temp++;
        }
     }
     return HCF;
}

int main(){
    int userInput1, userInput2;
    printf("Please enter two numnbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    printf("The HCF of %d and %d is %d\n", userInput1, userInput2, HCF(userInput1, userInput2));
    return 0;
}