// Write a function to calculate the number of combinations one can make from n items and r selected at a time.
#include<stdio.h>

int ItemsSelection(int items, int selection){
    int combinations = 1, temp = 1, r = 1;
    while(selection > 0){
        combinations *= items;
        selection--;
        items--;
        r *= temp;
        temp++;
    }
    return combinations / r;
}
int main(){
    int items, selection;
    printf("Please enter number of items and number of items selected at once: ");
    scanf("%d %d", &items, &selection);
    printf("Total number of combination possible with %d items when selected %d items at once is %d", items, selection, ItemsSelection(items, selection));
    return 0;
}