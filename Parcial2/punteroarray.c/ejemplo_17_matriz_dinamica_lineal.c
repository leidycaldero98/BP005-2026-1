#include <stdio.h>
#include <stdlib.h>

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
            matriz[i * columnas + j] = (i + 1) * 10 + j;
        }
    }

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i * columnas + j]);
        }

        printf("\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;
}
