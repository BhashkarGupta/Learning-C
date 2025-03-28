// Write a function to calculate LCM of two numbers.
#include<stdio.h>

int LCM(int num1, int num2){
    int LCM = 1, temp = 2;
    while(num1 >= temp && num2 >= temp ){
        if(num1%temp == 0 && num2%temp == 0){
            LCM *= temp;
            num1 /= temp;
            num2 /= temp;
            temp = 2;
        }else{
            temp++;
        }
    }
    LCM = LCM * num1 * num2;
    return LCM;
}

int main(){
    int userInput1, userInput2;
    printf("Please enter two numnbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    printf("The LCM of %d and %d is %d\n", userInput1, userInput2, LCM(userInput1, userInput2));
    return 0;
}