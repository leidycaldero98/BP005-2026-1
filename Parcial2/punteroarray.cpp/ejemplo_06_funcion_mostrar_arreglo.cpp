#include <iostream>

void mostrarArreglo(int datos[], int n) {

    int i;

    for (i = 0; i < n; i++) {

        std::cout << datos[i] << " ";
    }

    std::cout << std::endl;
}

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    mostrarArreglo(datos, 5);

    return 0;
}
