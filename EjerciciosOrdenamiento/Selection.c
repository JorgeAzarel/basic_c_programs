#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5] = {2, 8, 254, 36, 12};
    int indice;

    printf("Array original:\n");
    for (indice = 0; indice < 5; indice++) {
        printf("%d ", array[indice]);
    }

    selectionSort(array, 5);

    printf("Array ordenado:\n");
    for (indice = 0; indice < 5; indice++) {
        printf("%d ", array[indice]);
    }
    system("pause");
    return 0;
}
void selectionSort(int array[], int n) {
    int indice, a, menor, intercambio;
    for (indice = 0; indice < n - 1; indice++) {
        menor = indice;
        for (a = indice + 1; a < n; a++) {
            if (array[a] < array[menor]) {
                menor = j;
            }
        }
        if (menor != indice) {
            intercambio = array[indice];
            array[indice] = array[menor];
            array[menor] = intercambio;
        }
    }
}