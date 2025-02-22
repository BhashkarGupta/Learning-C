// Writing Table
#include<stdio.h>

int main(){
    int table;
    printf("Enter a Number for table: ");
    scanf("%d", &table);
    for (int i = 1; i <=10 ; i++){
        printf("%d X %d = %d\n", i, table, i*table);
    }
    return 0;
}