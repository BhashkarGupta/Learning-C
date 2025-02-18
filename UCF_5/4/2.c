// Write a program to calculate size of a real constant. 
#include<stdio.h>
int main(){
    float var = 1.349;
    double var2 = 9.0;
    printf("Size of a real constant(float) is %li\n", sizeof(var));
    printf("Size of a real constant(double) is %li\n", sizeof(var2));
    return 0;
}