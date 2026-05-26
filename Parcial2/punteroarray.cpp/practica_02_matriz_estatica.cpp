#include <iostream>

const int COLUMNAS = 3;

void mostrarMatriz(int m[][COLUMNAS],
                   int filas) {

    int i;
    int j;

    for (i = 0; i < filas; i++) {

        for (j = 0; j < COLUMNAS; j++) {

            std::cout << m[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

int sumarMatriz(int m[][COLUMNAS],
                int filas) {

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

    std::cout << "Suma = "
              << sumarMatriz(m, 2)
              << std::endl;

    return 0;
}
