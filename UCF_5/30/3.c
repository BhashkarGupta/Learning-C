// Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>

int main(){
    int list[10], smallest, secondSmallest;
    printf("Please enter 10 numbers: ");
    for(int i=0; i<10; i++){
        scanf("%d",  &list[i]);
    }
    // smallest = secondSmallest = list[0];
    // for (int i = 0; i < 10; i++)
    // {
    //     if  (smallest>list[i])
    //     {
    //         secondSmallest = smallest;
    //         smallest = list[i];
    //     }
    // }
    if (list[0] < list[1])
    {
        smallest = list[0];
        secondSmallest = list[1];
    }else{
        smallest = list[1];
        secondSmallest = list[0];
    }
    for (int i = 2; i < 10; i++)
    {
        if (secondSmallest > list[i]){
            if (smallest > list[i])
            {
                secondSmallest = smallest;
                smallest = list[i];
            }else if (smallest != list[i])
            {
                secondSmallest = list[i];
            }
        }
    }
    
    printf("The second smallest number in the array is %d\n", secondSmallest);
    return 0;
}
