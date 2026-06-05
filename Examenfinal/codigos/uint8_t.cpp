#include <iostream> // Permite imprimir en consola.
#include <cstdint> // Incluye uint8_t.

using namespace std; // Permite usar cout y endl directamente.

int main() { // Inicia la función principal.

    uint8_t valor = 65; // Guarda el valor 65 en 8 bits.

    cout << valor << endl; // Puede imprimir el carácter asociado a 65.
    cout << static_cast<int>(valor) << endl; // Imprime el valor como número.

    return 0; // Finaliza el programa.
}
