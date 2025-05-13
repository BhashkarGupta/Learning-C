#include<stdio.h>
// Define a structure Employee with member variables id, name, salary 
struct employee
{
    int id;
    char name[50];
    float salary;
};

void ClearOutNewLineChar(char str[]){
    int indexCounter = 0;
    while (str[indexCounter] != 0)
    {
        if (str[indexCounter] == '\n')
        {
            str[indexCounter] = 0;
            break;
        }
        indexCounter++;
    }
}

// Write a function to take input employee data from the user. [Refer structure from question 1] 
struct employee takeUserInput(){
    struct employee employeeData;
    printf("Please enter the emeployee id: ");
    scanf("%d", &employeeData.id);
    getchar();
    printf("Please enter the name of the employee: ");
    fgets(employeeData.name, 50, stdin);
    ClearOutNewLineChar(employeeData.name);
    printf("Please enter the employee salary: ");
    scanf("%f", &employeeData.salary);
    return employeeData;
}

// Write a function to display employee data. [ Refer structure from question 1] 
void PrintEmployeeData(struct employee employeeData[], int arraySize) {
    printf("%-5s  %-20s  %-10s\n", "Id", "Name", "Salary");
    for (int i = 0; i < arraySize; i++) {
        printf("%-5d  %-20s  %-10.2f\n",
               employeeData[i].id,
               employeeData[i].name,
               employeeData[i].salary);
    }
}

// Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
int HighestSalariedEmployee(struct employee employeeDataArray[], int arraySize){
    int highestSalaredEmployeeIndex = 0;
    float highestSalary = employeeDataArray[0].salary;;
    for (int i = 0; i < arraySize; i++)
    {
        if (highestSalary < employeeDataArray[i].salary)
        {
            highestSalary = employeeDataArray[i].salary;
            highestSalaredEmployeeIndex = i;
        } 
    }
    return highestSalaredEmployeeIndex;
} 

// Write a function to sort employees according to their salaries [refer structure from question 1] 
void stringCopy(char scrStr[50], char destStr[50]){
    int i = 0;
    while (scrStr[i] != 0 && i < 49)
    {
        destStr[i] = scrStr[i];
        i++;
    }
    destStr[i] = 0;
}

void SwapEmployee(struct employee *employee1, struct employee *employee2){
    int tempId;
    float tempSalary;
    char tempName[50];
    tempId = employee1->id;
    tempSalary = employee1->salary;
    stringCopy(employee1->name, tempName);
    employee1->id = employee2->id;
    employee1->salary = employee2->salary;
    stringCopy(employee2->name, employee1->name);
    (*employee2).id = tempId;
    (*employee2).salary = tempSalary;
    stringCopy(tempName, (*employee2).name);
}

void SortBySalary(struct employee employeeDataArray[], int arraySize){
    for (int i = 0; i < arraySize; i++)
    {
        SwapEmployee(&employeeDataArray[i], &employeeDataArray[HighestSalariedEmployee(&employeeDataArray[i], arraySize - i)+ i]);
    }
}

// Write a function to sort employees according to their names [refer structure from question 1]
char ToSmallCase(char character){
    if (character >= 65 && character <= 90)
    {
        return character + 32;
    }
    return character;
}

int CompareString(char str1[], char str2[]){
    int indexCounter = 0;
    while (str1[indexCounter] != 0 && str2[indexCounter] != 0)
    {
        if (ToSmallCase(str1[indexCounter]) > ToSmallCase(str2[indexCounter]))
        {
            return 0;
        } else if ((ToSmallCase(str1[indexCounter]) < ToSmallCase(str2[indexCounter])))
        {
            return 1;
        }
        indexCounter++;
    }
    if (str1[indexCounter] > str2[indexCounter]){
        return 0;
    }else{
        return 1;
    }
}

void SortByName(struct employee employeeDataArray[], int arraySize){
    for (int i = 0; i < arraySize-1; i++)
    {
        int smallestStringIndex = i;
        for (int j = i + 1; j < arraySize; j++)
        {
            if (!CompareString(employeeDataArray[smallestStringIndex].name, employeeDataArray[j].name))
            {
                smallestStringIndex = j;
            }
        }
        if (smallestStringIndex != i)
        {
            SwapEmployee(&employeeDataArray[i], &employeeDataArray[smallestStringIndex]);
        }
    }
}

int main() {
    struct employee employees[11] = {
        {1001, "Amit Sharma", 58000.00},
        {1002, "Priya Verma", 62000.50},
        {1003, "Rahul Mehta", 47500.75},
        {1004, "Neha Iyer", 51000.00},
        {1005, "Arjun Kapoor", 49500.25},
        {1006, "Kavita Reddy", 71000.00},
        {1007, "Rohan Singh", 46000.80},
        {1008, "Sneha Joshi", 54000.00},
        {1009, "Vikram Rao", 68000.90},
        {1010, "Anjali Nair", 63000.60},
        takeUserInput()
    };

    int size = 11;

    printf("Original Employee Data:\n");
    PrintEmployeeData(employees, size);

    // Find and print highest salaried employee
    int highestIndex = HighestSalariedEmployee(employees, size);
    printf("\nHighest Salaried Employee:\n");
    PrintEmployeeData(&employees[highestIndex], 1);

    // Sort employees by salary
    SortBySalary(employees, size);

    printf("\nEmployee Data After Sorting by Salary (Descending):\n");
    PrintEmployeeData(employees, size);

    // Sorting by name
    printf("\nSorting Employee by Name:\n");

    // Sort employees by Name
    SortByName(employees, size);

    printf("\nEmployee Data After Sorting by Name:\n");
    PrintEmployeeData(employees, size);

    return 0;
}




