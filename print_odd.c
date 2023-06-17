// Print all the odd number from 1 to 50
#include<stdio.h>

int main()
{
    for (int i =1; i <= 50; i++){
        if (i % 2 == 0){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
