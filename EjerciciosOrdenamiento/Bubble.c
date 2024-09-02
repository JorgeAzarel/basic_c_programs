#include <stdio.h>
#include <stdlib.h>

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

/*#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 2, b = 8, c = 254, d = 36, e = 12, temp;

    if (a > b) {
    	temp = a; a = b; b = temp; }
    if (a > c) {
    	temp = a; a = c; c = temp; }
    if (a > d) {
    	temp = a; a = d; d = temp; }
    if (a > e) {
    	temp = a; a = e; e = temp; }

    if (b > c) {
    	temp = b; b = c; c = temp; }
    if (b > d) {
    	temp = b; b = d; d = temp; }
    if (b > e) {
    	temp = b; b = e; e = temp; }

    if (c > d) {
    	temp = c; c = d; d = temp; }
    if (c > e) {
    	temp = c; c = e; e = temp; }

    if (d > e) {
    	temp = d; d = e; e = temp; }

    printf("Numeros ordenados:\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);

    system ("pause");
    return 0;
}