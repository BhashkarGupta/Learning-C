// Write a function to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void TakeUserInput(int list[], int size){
    printf("Please enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
}

void PrintArray(int list[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void MergeSortedArray(int array1[], int array2[], int mergedArray[], int size1, int size2){
    int counter1 = 0, counter2 = 0, counter = 0;
    while(counter1 < size1 && counter2 < size2){
        if(array1[counter1] > array2[counter2]){
            mergedArray[counter] = array1[counter1];
            counter1++;
        }else{
            mergedArray[counter] = array2[counter2];
            counter2++;
        }
        counter++;
    }
    while(counter1 < size1){
        mergedArray[counter] = array1[counter1];
        counter1++;
        counter++;
    }
    while(counter2 < size2){
        mergedArray[counter] = array2[counter2];
        counter2++;
        counter++;
    }
}

int main(){
    int mergedArray[14];
    int array1[] = {25, 22, 17, 15, 7, 5, 2};
    int array2[] = {28, 27, 22, 18, 13, 11, 5};
    MergeSortedArray(array1, array2, mergedArray, 7, 7);
    PrintArray(mergedArray, 14);

    printf("\n");
    return 0;
}
