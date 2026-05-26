#include <iostream>

int main() {

    int n;
    int i;

    int *datos = nullptr;

    std::cout << "Cuantos enteros desea guardar: ";
    std::cin >> n;

    datos = new int[n];

    for (i = 0; i < n; i++) {

        std::cout << "Ingrese datos["
                  << i << "]: ";

        std::cin >> datos[i];
    }

    std::cout << "Datos ingresados: ";

    for (i = 0; i < n; i++) {

        std::cout << datos[i] << " ";
    }

    std::cout << std::endl;

    delete[] datos;
    datos = nullptr;

    return 0;
}
