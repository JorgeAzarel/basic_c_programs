#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int n);

int main() {
    int array[5] = {2, 8, 254, 36, 12};
    int a;

    printf("Original Array:\n");
    for (a = 0; a < 5; a++) {
        printf("%d ", array[a]);
    }

    insertionSort(array, 5);
    printf("\n");
    printf("Sort Array:\n");
    for (a = 0; a < 5; a++) {
        printf("%d ", array[a]);
    }

    system("pause");
    return 0;
}
void insertionSort(int array[], int n) {
    int a, b, key;
    for (a = 1; a < n; a++) {
        key = array[a];
        b = a - 1;
        while (b >= 0 && array[b] > key) {
            array[b + 1] = array[b];
            b--;
        }
        array[b + 1] = key;
    }
}