#include <stdio.h>
#include <stdlib.h>

int main() {
    int arreglo[5] = {2, 8, 254, 36, 12};
    int i;

    printf("Array original:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }

    QuickSort(arreglo, 0, 4);

    printf("Array ordenado:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }

    system("pause");
    return 0;
}
int particion(int arreglo[], int bajo, int alto) {
    int pivote = arreglo[alto];
    int indice = (bajo - 1);

    for (int j = bajo; j < alto; j++) {
        if (arreglo[j] <= pivote) {
            indice++;
            int temporal = arreglo[indice];
            arreglo[indice] = arreglo[j];
            arreglo[j] = temporal;
        }
    }
    int temporal = arreglo[indice + 1];
    arreglo[indice + 1] = arreglo[alto];
    arreglo[alto] = temporal;

    return (indice + 1);
}

void QuickSort(int arreglo[], int bajo, int alto) {
    if (bajo < alto) {
        int indicePivote = particion(arreglo, bajo, alto);
        QuickSort(arreglo, bajo, indicePivote - 1);
        QuickSort(arreglo, indicePivote + 1, alto);
    }
}