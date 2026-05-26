#include <iostream>

int main() {

    int datos[3] = {10, 20, 30};

    int *p = datos;

    std::cout << "datos[1] = "
              << datos[1] << std::endl;

    std::cout << "*(datos + 1) = "
              << *(datos + 1) << std::endl;

    std::cout << "*(p + 1) = "
              << *(p + 1) << std::endl;

    std::cout << "p[1] = "
              << p[1] << std::endl;

    return 0;
}
