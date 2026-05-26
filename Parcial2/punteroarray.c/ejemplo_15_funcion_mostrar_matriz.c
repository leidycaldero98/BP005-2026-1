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

int main() {

    int m[2][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    mostrarMatriz(m, 2);

    return 0;
}
