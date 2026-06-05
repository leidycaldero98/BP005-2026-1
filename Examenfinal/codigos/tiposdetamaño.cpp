#include <iostream> // Permite imprimir en consola.
#include <cstdint> // Incluye uint8_t, uint16_t y uint32_t.

using namespace std; // Permite usar cout y endl directamente.

int main() { // Inicia la función principal.

    uint8_t pwm = 255; // Entero sin signo de 8 bits.
    uint16_t pulsos = 1200; // Entero sin signo de 16 bits.
    uint32_t tiempo = 50000; // Entero sin signo de 32 bits.

    cout << static_cast<int>(pwm) << endl; // Convierte pwm a int para imprimirlo como número.
    cout << pulsos << endl; // Imprime el número de pulsos.
    cout << tiempo << endl; // Imprime el tiempo.

    return 0; // Finaliza el programa correctamente.
}
