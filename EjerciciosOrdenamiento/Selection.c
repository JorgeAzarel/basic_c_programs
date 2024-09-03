#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {2, 8, 254, 36, 12};
    int index;

    printf("Original Array:\n");
    for (index = 0; index < 5; index++) {
        printf("%d ", array[index]);
    }

    selectionSort(array, 5);

    printf("Sort Array:\n");
    for (index = 0; index < 5; index++) {
        printf("%d ", array[index]);
    }
    system("pause");
    return 0;
}
void selectionSort(int array[], int n) {
    int index, a, minor, exchange;
    for (index = 0; index < n - 1; index++) {
        minor = index;
        for (a = index + 1; a < n; a++) {
            if (array[a] < array[minor]) {
                minor = j;
            }
        }
        if (minor != index) {
            exchange = array[index];
            array[index] = array[minor];
            array[minor] = exchange;
        }
    }
}