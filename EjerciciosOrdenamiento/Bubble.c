#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {2, 8, 254, 36, 12};
    int a;
printf("Array original:\n");
    for (a = 0; a < 5; a++) {
        printf("%d ", array[a]);
    }
 
    bubbleSort(array, 5);

    printf("Array ordenado:\n");
    for (a = 0; a < 5; a++) {
        printf("%d ", array[a]);
    }

    system("pause");
    return 0;
}
void bubbleSort(int array[], int n) {
    int a, b, intercambio;
    for (a = 0; a < n - 1; a++) {
        for (b = 0; b < n - a - 1; b++) {
            if (array[b] > array[b + 1]) {
                intercambio = array[b];  
                array[b] = array[b + 1];
                array[b + 1] = intercambio;
            }
        }
    }
}