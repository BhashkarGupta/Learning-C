// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. 
#include<stdio.h>
int main(){
    int marks[5], passedSubjects = 0;
    printf("Please enter the marks of 5 subjects (should be seperated by space and max marks: 100): ");
    scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > 33)
        {
            passedSubjects++;
        }
    }
    if (passedSubjects == 5)
    {
        printf("Congratucation! You passed in all the subjects\n");
    }
    else
    {
        printf("Sorry, But you only passed in %d subjects.\n", passedSubjects);
    }
    
    return 0;
}