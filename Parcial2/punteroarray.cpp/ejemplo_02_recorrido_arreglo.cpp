#include <iostream>

int main() {

    int datos[5] = {8, 3, 15, 6, 10};

    int i;

    for (i = 0; i < 5; i++) {

        std::cout << "datos[" << i << "] = "
                  << datos[i] << std::endl;
    }

    return 0;
}
