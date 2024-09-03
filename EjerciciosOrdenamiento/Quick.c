#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {2, 8, 254, 36, 12};
    int i;

    printf("Original Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    quickSort(array, 0, 4);

    printf("Sort Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    system("pause");
    return 0;
}
int particion(int array[], int low, int high) {
    int pivot = array[high];
    int index = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            index++;
            int temporary = array[index];
            array[index] = array[j];
            array[j] = temporary;
        }
    }
    int temporary = array[index + 1];
    array[index + 1] = array[high];
    array[high] = temporary;

    return (index + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int indexpivot = particion(array, low, high);
        quickSort(array, low, indexpivot - 1);
        quickSort(array, indexpivot + 1, high);
    }
}