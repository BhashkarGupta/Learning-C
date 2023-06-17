// Write a function to print n terms of the fibonacci sequence. 

#include<stdio.h>

int main(){
    int result = 0, user_input, buffer, first_term = 0, second_term = 1;
    printf("Please enter the nth term for finding sum of fibonacci sequence: ");
    scanf("%d", &user_input);
    if (user_input > 0){
        printf("%d ", first_term);
        while (user_input != 1) // 1 cause we have already printed 1st term and hence starting from second term 
        {
            buffer = first_term + second_term;
            first_term = second_term;
            second_term = buffer;
            result += second_term;
            user_input -= 1;
            printf("+ %d ", second_term);
        }
        printf("= %d\n", result);

    }
    else{
        printf("Invalid Input.\n");
    }

    return 0;
}