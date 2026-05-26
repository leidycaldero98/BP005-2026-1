#include <iostream>

void leerArreglo(int *datos, int n) {

    int i;

    if (datos == nullptr) {
        return;
    }

    for (i = 0; i < n; i++) {

        std::cout << "Ingrese datos["
                  << i << "]: ";

        std::cin >> datos[i];
    }
}

void mostrarArreglo(int *datos, int n) {

    int i;

    if (datos == nullptr) {
        return;
    }

    for (i = 0; i < n; i++) {

        std::cout << datos[i] << " ";
    }

    std::cout << std::endl;
}

void analizarArreglo(int *datos,
                     int n,
                     int *suma,
                     float *promedio) {

    int i;

    if (datos == nullptr ||
        suma == nullptr ||
        promedio == nullptr) {
        return;
    }

    *suma = 0;

    for (i = 0; i < n; i++) {

        *suma = *suma + datos[i];
    }

    *promedio =
        static_cast<float>(*suma) / n;
}

int main() {

    int datos[5];

    int suma;
    float promedio;

    leerArreglo(datos, 5);

    mostrarArreglo(datos, 5);

    analizarArreglo(datos,
                     5,
                     &suma,
                     &promedio);

    std::cout << "Suma = "
              << suma << std::endl;

    std::cout << "Promedio = "
              << promedio << std::endl;

    return 0;
}
