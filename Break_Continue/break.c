// keep taking numbers as intput from user until user enters an odd number.
#include<stdio.h>

int main()
{
    int user_input = 2;
    while (user_input % 2 == 0)
    {
        printf("Please Enter a Number:");
        scanf("%d", &user_input);
        if (user_input % 2 != 0)
        {
            printf("The Number is Odd number.\n");
            break; //this will break the loop and exit it.
        }  
        printf("The Number is Even Number.\n");
    }
    printf("End\n");
    return 0;
}
