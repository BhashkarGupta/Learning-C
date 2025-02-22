#include<stdio.h>

int main(){
    int marks;
    printf("Please Enter the Student Marks: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100){
        printf("Invalid Marks\n");
    }
    else {
        if (marks < 30) {
            printf("The Student Grade is C\n");
        }
        else if (marks >= 30 && marks < 70){
            printf("The Student Grade is B\n");
        }
        else if (marks <= 70 && marks < 90)
        {
            printf("The Student Grade is A\n");
        }
        else{
            printf("The Student Grade is A+\n");
        }
        
    }
}