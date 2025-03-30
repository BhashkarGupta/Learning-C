// Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5 ... n!/n
#include<stdio.h>

int Factorial(int num){
    int result = 1;
    while(num != 1){
        result *= num;
        num--;
    }
    return result;
}

int SeriesSolution(int NthTerm){
    int result = 0;
    while(NthTerm > 0){
        result += Factorial(NthTerm)/NthTerm;
        NthTerm--;
    }
    return result;
}


int main(){
    int userInput;
    printf("Please enter Nth term to find the solution for: \n");
    printf("1!/1+2!/2+3!/3+4!/4+5!/5 ... n!/n\n");
    printf("%d \n", Factorial(5));
    scanf("%d", &userInput);
    printf("%d", SeriesSolution(userInput));
    return 0;
}