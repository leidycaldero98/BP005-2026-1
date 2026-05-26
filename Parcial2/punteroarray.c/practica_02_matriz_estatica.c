#include <stdio.h>

#define COLUMNAS 3

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

int sumarMatriz(int m[][COLUMNAS], int filas) {

    int i;
    int j;

    int suma = 0;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < COLUMNAS; j++) {
            suma = suma + m[i][j];
        }
    }

    return suma;
}

int main() {

    int m[2][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    mostrarMatriz(m, 2);

    printf("Suma = %d\n", sumarMatriz(m, 2));

    return 0;
}
