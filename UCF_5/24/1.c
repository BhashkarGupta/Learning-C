//Write a function to print all Prime numbers between two given numbers.
#include<stdio.h>

int IsPrime(int num){
    int temp = 2;
    if(num == 1){
        return 1;
    }
    while(num >= temp){
        if(num%temp == 0){
            break;
        }
        temp++;
    }
    if(temp == num){
        return 1;
    }else{
        return 0;
    }
}

void PrintPrimeNumbers(int num1, int num2){
    for(int i=num1; i < num2; i++){
        if(IsPrime(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int userInput1, userInput2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInput1, &userInput2);
    printf("The prime numbers between %d and %d is\n", userInput1, userInput2);
    PrintPrimeNumbers(userInput1, userInput2);
    return 0;
}
