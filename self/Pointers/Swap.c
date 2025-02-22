// Create a Function to swap two values
#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int x, y;
    printf("Please input the value of First Number: ");
    scanf("%d", &x);
    printf("Please input the value of second Number: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("Swaping the values of Variables.\n");
    printf("First Number = %d\nSecond Number = %d\n", x, y);
    return 0;
}

void swap(int *a, int *b){
    int buffer;
    buffer = *b;
    *b = *a;
    *a = buffer;
    return;
}