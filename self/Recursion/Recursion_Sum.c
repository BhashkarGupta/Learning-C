#include <stdio.h>

int sum(int number);

int main(){
    int number;
    printf("Enter the Number to find the sum of n Natural: ");
    scanf("%d", &number);
    printf("The Sum of natural no. up to %d is %d.\n", number, sum(number));
    return 0;
}

int sum(int number){
    if (number == 1){
        return 1;
    }
    int result;
    result = number + sum(number -1);
    return result;
}