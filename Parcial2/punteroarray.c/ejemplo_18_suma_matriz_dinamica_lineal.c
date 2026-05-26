#include <stdio.h>
#include <stdlib.h>

int sumarMatriz(int *matriz, int filas, int columnas) {

    int i;
    int j;

    int suma = 0;

    if (matriz == NULL) {
        return 0;
    }

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {
            suma = suma + matriz[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    int filas = 2;
    int columnas = 3;

    int i;
    int j;

    int *matriz = NULL;

    matriz = malloc(filas * columnas * sizeof(int));

    if (matriz == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {
            matriz[i * columnas + j] = i * columnas + j + 1;
        }
    }

    printf("Suma = %d\n",
           sumarMatriz(matriz, filas, columnas));

    free(matriz);
    matriz = NULL;

    return 0;
}
