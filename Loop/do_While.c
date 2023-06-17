// Keep taking numbers as input from the user until the user enters a number which is multiple of 7.
#include<stdio.h>

int main()
{
    int user_input;
    do
    {
        printf("Enter a 5 digit Number which is multiple of 7: ");
        scanf("%d", &user_input);
        if (user_input % 7 == 0)
        {
            printf("You are correct, %d / 7 = %d\n", user_input, user_input/7);
            break;
        }
        

    } while (user_input != 0);
    
    return 0;
}
