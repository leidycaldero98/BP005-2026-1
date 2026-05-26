#include <iostream>

int main() {

    int fila = 1;

    int columna;

    int n = 9;

    int centro = 5;

    do {

        columna = 1;

        do {

            if (fila == centro ||
                columna == centro) {

                std::cout << "+";

            } else {

                std::cout << " ";
            }

            columna++;

        } while (columna <= n);

        std::cout << std::endl;

        fila++;

    } while (fila <= n);

    return 0;
}
