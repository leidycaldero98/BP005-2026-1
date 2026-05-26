#include <iostream>

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
                = (i + 1) * 10 + j;
        }
    }

    for (i = 0; i < filas; i++) {

        for (j = 0; j < columnas; j++) {

            std::cout
                << matriz[i * columnas + j]
                << " ";
        }

        std::cout << std::endl;
    }

    delete[] matriz;
    matriz = nullptr;

    return 0;
}
