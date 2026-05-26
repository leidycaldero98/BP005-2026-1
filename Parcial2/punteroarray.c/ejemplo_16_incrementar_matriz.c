#include <stdio.h>

#define COLUMNAS 3

void incrementarMatriz(int m[][COLUMNAS], int filas) {

    int i;
    int j;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < COLUMNAS; j++) {
            m[i][j] = m[i][j] + 1;
        }
    }
}

void mostrarMatriz(int m[][COLUMNAS], int filas) {

    int i;
    int j;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < COLUMNAS; j++) {
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }
}

int main() {

    int m[2][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Antes:\n");
    mostrarMatriz(m, 2);

    incrementarMatriz(m, 2);

    printf("Despues:\n");
    mostrarMatriz(m, 2);

    return 0;
}
