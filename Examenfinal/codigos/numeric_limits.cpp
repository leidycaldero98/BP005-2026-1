#include <iostream> // Permite imprimir en consola.
#include <limits> // Incluye numeric_limits.
#include <cstdint> // Incluye tipos de tamaño definido.

using namespace std; // Permite usar cout y endl directamente.

int main() { // Inicia la función principal.

    cout << "int min: " << numeric_limits<int>::min() << endl;
    cout << "int max: " << numeric_limits<int>::max() << endl;

    cout << "uint8_t max: "
         << static_cast<int>(numeric_limits<uint8_t>::max()) << endl;

    cout << "int16_t min: " << numeric_limits<int16_t>::min() << endl;
    cout << "int16_t max: " << numeric_limits<int16_t>::max() << endl;

    return 0;
}
