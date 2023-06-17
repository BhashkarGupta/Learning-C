#include<stdio.h>

int main(){
    int marks;
    printf("Please Enter the Marks of the Student: ");
    scanf("%d", &marks);
    if (marks > 0 && marks <= 100){
        marks > 30 ? printf("PASS\n") : printf("FAIL\n"); // Single line for if and else
        }
    else{
        printf("Wrong Marks\n");
        }
    return 0;
}