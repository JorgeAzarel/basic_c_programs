#include <stdio.h>
#include <stdlib.h>
#define TAMANO 5

void fusionar(int array[], int inicio, int medio, int fin) {
    int tamanoIzquierda = medio - inicio + 1;
    int tamanoDerecha = fin - medio;
    int izquierda[TAMANO];
    int derecha[TAMANO];
    
    for (int i = 0; i < tamanoIzquierda; i++)
        izquierda[i] = array[inicio + i];
    for (int j = 0; j < tamanoDerecha; j++)
        derecha[j] = array[medio + 1 + j];
    
    int i = 0, j = 0, k = inicio;
    while (i < tamanoIzquierda && j < tamanoDerecha) {
        if (izquierda[i] <= derecha[j]) {
            array[k] = izquierda[i];
            i++;
        } else {
            array[k] = derecha[j];
            j++;
        }
        k++;
    }
    while (i < tamanoIzquierda) {
        array[k] = izquierda[i];
        i++;
        k++;
    }
    while (j < tamanoDerecha) {
        array[k] = derecha[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = inicio + (fin - inicio) / 2;
        mergeSort(array, inicio, medio);
        mergeSort(array, medio + 1, fin);
        fusionar(array, inicio, medio, fin);
    }
}
int main() {
    int array[TAMANO] = {2, 8, 254, 36, 12};
    
    printf("Array original:\n");
    for (int a = 0; a < TAMANO; a++) {
        printf("%d ", array[a]);
    }
    mergeSort(array, 0, TAMANO - 1);

    printf("Array ordenado:\n");
    for (int a = 0; a < TAMANO; a++) {
        printf("%d ", array[a]);
    }

    system("pause");
        return 0;
    }