// There are five classes with different number of students in them. Five arrays
// containing marks of students of each class. Write a function to receive an address
// of an array of pointers to access marks of all the students. The job of function is to
// find the highest marks among all the classes.
#include<stdio.h>

int HighestMarks(int *classMarks[], int classCount[], int numberOfClass){
    int highestMarks = 0;
    for (int i = 0; i < numberOfClass; i++)
    {
        for(int j = 0; j < classCount[i]; j++){
            if (highestMarks < *(classMarks[i] + j))
            {
                highestMarks = *(classMarks[i] + j);
            }
            
        }
    }
    return highestMarks;
}

int main(){
    int class1[] = {34, 54, 63, 75, 89};
    int class2[] = {23, 68, 90, 92};
    int class3[] = {12, 95, 68, 22, 57, 74};
    int class4[] = {65, 26, 74, 77, 83};
    int class5[] = {51, 98, 86};
    int *classMarks[] = {class1, class2, class3, class4, class5};
    int numberOfStudentsInClasses[] = {5, 4, 6, 5, 3};
    printf("%d\n", HighestMarks(classMarks, numberOfStudentsInClasses, 5));
    return 0;
}
