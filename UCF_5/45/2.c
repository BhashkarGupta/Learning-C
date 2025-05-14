// Write a program to store information of 10 students and display them using structure. 
#include<stdio.h>

struct student
{
    char name[50];
    int roll;
    int class;
    char section;
};

void PrintStudents(struct student studentsArray[], int arraySize){
    printf("%-4s %-15s %-5s %-2s\n", "Roll", "Name", "Class", "Section");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%-4d %-15s %-5d %-2c\n", studentsArray[i].roll, studentsArray[i].name, studentsArray[i].class, studentsArray[i].section);
    }
}


int main() {
    struct student students[10] = {
        {"Aarav Sharma", 1, 10, 'A'},
        {"Isha Patel", 2, 10, 'A'},
        {"Rohan Mehta", 3, 10, 'B'},
        {"Sneha Reddy", 4, 9, 'C'},
        {"Vikram Rao", 5, 9, 'B'},
        {"Pooja Nair", 6, 8, 'A'},
        {"Karan Singh", 7, 10, 'C'},
        {"Neha Verma", 8, 9, 'A'},
        {"Aditya Joshi", 9, 10, 'B'},
        {"Meera Desai", 10, 8, 'C'}
    };

    PrintStudents(students, 10);

    return 0;
}