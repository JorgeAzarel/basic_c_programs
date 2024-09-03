#include <stdio.h>
#include <stdlib.h>
#deende SIZE 5
void mergeSort(int array[], int start, int end);
void merge(int array[], int start, int medium, int end);
int main() {
    int array[SIZE] = {2, 8, 254, 36, 12};
    
    printf("Original Array:\n");
    for (int a = 0; a < SIZE; a++) {
        printf("%d ", array[a]);
    }
    mergeSort(array, 0, SIZE - 1);
    printf("\n");
    printf("Sort Array:\n");
    for (int a = 0; a < SIZE; a++) {
        printf("%d ", array[a]);
    }

    system("pause");
        return 0;
    }
void merge(int array[], int start, int medium, int end) {
    int SIZEleft = medium - start + 1;
    int SIZEright = end - medium;
    int left[SIZE];
    int right[SIZE];
    
    for (int i = 0; i < SIZEleft; i++)
        left[i] = array[start + i];
    for (int j = 0; j < SIZEright; j++)
        right[j] = array[medium + 1 + j];
    
    int i = 0, j = 0, k = start;
    while (i < SIZEleft && j < SIZEright) {
        if (left[i] <= right[j]) {
            array[k] = left[i];
            i++;
        } else {
            array[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < SIZEleft) {
        array[k] = left[i];
        i++;
        k++;
    }
    while (j < SIZEright) {
        array[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int start, int end) {
    if (start < end) {
        int medium = start + (end - start) / 2;
        mergeSort(array, start, medium);
        mergeSort(array, medium + 1, end);
        merge(array, start, medium, end);
    }
}