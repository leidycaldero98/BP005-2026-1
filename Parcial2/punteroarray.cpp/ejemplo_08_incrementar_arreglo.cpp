#include <iostream>

void incrementarTodos(int *datos, int n) {

    int i;

    if (datos == nullptr) {
        return;
    }

    for (i = 0; i < n; i++) {
        datos[i] = datos[i] + 1;
    }
}

void mostrarArreglo(int *datos, int n) {

    int i;

    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " ";
    }

    std::cout << std::endl;
}

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    std::cout << "Antes: ";
    mostrarArreglo(datos, 5);

    incrementarTodos(datos, 5);

    std::cout << "Despues: ";
    mostrarArreglo(datos, 5);

    return 0;
}
