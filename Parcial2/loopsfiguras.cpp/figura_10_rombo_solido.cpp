#include <iostream>

int main() {

    int fila, espacios, simbolos;

    int n = 5;

    for (fila = 1; fila <= n; fila++) {

        for (espacios = 1;
             espacios <= n - fila;
             espacios++) {

            std::cout << " ";
        }

        for (simbolos = 1;
             simbolos <= 2 * fila - 1;
             simbolos++) {

            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (fila = n - 1;
         fila >= 1;
         fila--) {

        for (espacios = 1;
             espacios <= n - fila;
             espacios++) {

            std::cout << " ";
        }

        for (simbolos = 1;
             simbolos <= 2 * fila - 1;
             simbolos++) {

            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
