#include <iostream>

void analizarArreglo(int *datos,
                     int n,
                     int *suma,
                     int *mayor,
                     int *menor) {

    int i;

    if (datos == nullptr ||
        suma == nullptr ||
        mayor == nullptr ||
        menor == nullptr) {
        return;
    }

    *suma = 0;

    *mayor = datos[0];
    *menor = datos[0];

    for (i = 0; i < n; i++) {

        *suma = *suma + datos[i];

        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }

        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    int suma;
    int mayor;
    int menor;

    analizarArreglo(datos, 5,
                     &suma,
                     &mayor,
                     &menor);

    std::cout << "Suma = "
              << suma << std::endl;

    std::cout << "Mayor = "
              << mayor << std::endl;

    std::cout << "Menor = "
              << menor << std::endl;

    return 0;
}
