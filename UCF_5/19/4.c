// 4. Write a menu driven program with the following options:
// 1. Check whether a given set of three numbers are lengths of an isosceles
// triangle or not
// 2.Check whether a given set of three numbers are lengths of sides of a right
// angled triangle or not
// 3. Check whether a given set of three numbers are equilateral triangle or not
#include<stdio.h>
int main(){
    int opeartion, a, b, c;
    float side1, side2, side3;
    printf("Please enter sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    printf("please enter the operation number:\n1.If it is isosceles triangle\n2.If it is right angle triangle\n3.If is is equilateral triangle\n");
    scanf("%d", &opeartion);
    switch(opeartion){
        case 1:
        if(side1 == side2 || side2 == side3 || side3 == side1){
            printf("This is isosceles triangle.\n");
        }else{
            printf("This is not an isosceles triangle.\n");
        }
        break;

        case 2:
        if(side1 > side2){
            if(side1 > side3){
                c = side1;
                a = side2;
                b = side3;
            }else{
                c = side3;
                a = side2;
                b = side1;
            }
        }else{
            if(side2 > side3){
                c = side2;
                a = side1;
                b = side3;
            }else{
                c = side3;
                a = side2;
                b = side1;
            }
        }
        if((a*a + b*b) == (c*c)){
            printf("This is a right angle triangle\n");
        }else{
            printf("This is not a right angle triangle\n");
        }
        break;

        case 3:
        if(side1 == side2 && side2 == side3){
            printf("This is an equilateral triangle\n");
        }else{
            printf("This is not an equilateral triangle\n");
        }
        break;

        default:
        printf("Invalid Input");
    }
    return 0;
}