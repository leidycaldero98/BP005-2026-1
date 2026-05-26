#include <iostream>

int sumarMatriz(int *matriz,
                int filas,
                int columnas) {

    int i;
    int j;

    int suma = 0;

    if (matriz == nullptr) {
        return 0;
    }

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {

            suma = suma
                 + matriz[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    int filas = 2;
    int columnas = 3;

    int i;
    int j;

    int *matriz = nullptr;

    matriz = new int[filas * columnas];

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {

            matriz[i * columnas + j]
                = i * columnas + j + 1;
        }
    }

    std::cout << "Suma = "
              << sumarMatriz(matriz,
                             filas,
                             columnas)
              << std::endl;

    delete[] matriz;
    matriz = nullptr;

    return 0;
}
