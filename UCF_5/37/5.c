// Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>

int IsAlphanumeric(char str[])
{
    int count = 0, number = 0, alphabet = 0;
    while (str[count] != 0)
    {
        switch (str[count])
        {
        case 65 ... 90:
        case 97 ... 122:
            alphabet++;
            break;

        case 48 ... 57:
            number++;
            break;
        }
        if (alphabet && number)
        {
            return 1;
        }
        count++;
    }
    return 0;
}

int main()
{
    char str[] = "This is a string";
    char str1[] = "One is called 1 in numbers";
    char str2[] = "1234344534";
    printf("Case 1: %d\n", IsAlphanumeric(str1));
    printf("Case 2: %d\n", IsAlphanumeric(str2));
    printf("Case 3: %d\n", IsAlphanumeric(str));
    return 0;
}
