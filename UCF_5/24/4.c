// Write a function to print all Armstrong numbers between two given numbers.
#include<stdio.h>

int DigitCounter(int digit){
    int counter = 0;
    while(digit/10 != 0){
        counter++;
        digit /= 10;
    }
    counter++;
    return counter;
}

int Power(int num, int power){
    int result = 1;
    while(power > 0){
        result *= num;
        power--;
    }
    return result;
}

int IsArmstrong(int num){
    int result = 0, temp = num;
    int digitCount = DigitCounter(num);
    for(int i=1; i < digitCount; i++){
        int lastDigit = temp%10;
        result += Power(lastDigit, digitCount);
        temp /= 10;
    }
    result += Power(temp, digitCount);
    if(result == num){
        return 1;
    }else{
        return 0;
    }
}

void ArmstrongNumbersBetween(int num1, int num2){
    while(num1 != num2){
        if(IsArmstrong(num1)){
            printf("%d ", num1);
        }
        num1++;
    }
    printf("\n");
}

int main(){
    int userInput1, userInput2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    printf("Armstrong Numbers between %d and %d is:", userInput1, userInput2);
    ArmstrongNumbersBetween(userInput1, userInput2);
    return 0;
}