// Write a function to merge two arrays in a given array. [ void merge(int *arr1, int size1, int *arr2, int size2, int *arr3); ]
#include<stdio.h>

void merge(int *arr1, int size1, int *arr2, int size2, int *arr3){
    for (int i = 0; i < size1; i++)
    {
        *(arr3 + i) = *(arr1 + i);
    }
    for (int i = 0; i < size2; i++)
    {
        *(arr3 + i + size1) = *(arr2 + i);
    }
}


int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[size1 + size2];

    merge(arr1, size1, arr2, size2, arr3);

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}