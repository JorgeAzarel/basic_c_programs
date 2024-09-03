#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int n);

int main() {
    int array[5] = {2, 8, 254, 36, 12};
    int a;
printf("Original Array:\n");
    for (a = 0; a < 5; a++) {
        printf("%d ", array[a]);
    }
 
    bubbleSort(array, 5);
    printf("\n");
    printf("Sort Array:\n");
    for (a = 0; a < 5; a++) {
        printf("%d ", array[a]);
    }

    system("pause");
    return 0;
}
void bubbleSort(int array[], int n) {
    int a, b, exchange;
    for (a = 0; a < n - 1; a++) {
        for (b = 0; b < n - a - 1; b++) {
            if (array[b] > array[b + 1]) {
                exchange = array[b];  
                array[b] = array[b + 1];
                array[b + 1] = exchange;
            }
        }
    }
}