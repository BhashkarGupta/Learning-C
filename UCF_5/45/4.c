// Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure 
// named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>

struct marks
{
    int roll;
    char name[20];
    float chem_marks;
    float maths_markts;
    float phy_marks;
};

float CalculatePercentage(float chem, float math, float phy){
    return (chem + math + phy) / 3;
}

void PrintResult(struct marks studentMarksArray[], int arraySize){
    printf("%-4s  %-15s %-4s\n", "Roll", "Name", "Percentage");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%-4d  %-15s  %-4.2f\n", studentMarksArray[i].roll, studentMarksArray[i].name, 
        CalculatePercentage(
            studentMarksArray[i].chem_marks,
            studentMarksArray[i].maths_markts,
            studentMarksArray[i].phy_marks
        ));
    }
}

int main() {
    struct marks students[10] = {
        {1, "Aarav Sharma",     85.5, 92.0, 88.0},
        {2, "Isha Patel",       78.0, 83.5, 80.0},
        {3, "Rohan Mehta",      91.0, 89.0, 95.0},
        {4, "Sneha Reddy",      67.5, 72.0, 70.0},
        {5, "Vikram Rao",       88.0, 86.5, 90.0},
        {6, "Pooja Nair",       92.5, 94.0, 96.0},
        {7, "Karan Singh",      76.0, 81.0, 79.5},
        {8, "Neha Verma",       84.0, 88.0, 85.0},
        {9, "Aditya Joshi",     90.0, 91.5, 93.0},
        {10,"Meera Desai",      80.0, 85.0, 82.0}
    };

    PrintResult(students, 10);

    return 0;
}
