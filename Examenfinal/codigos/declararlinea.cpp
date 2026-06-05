#include <iostream> // Incluye la librería de salida.
#include <cstdint> // Incluye tipos enteros de tamaño definido.

using namespace std; // Permite usar cout y endl directamente.

int main() { // Inicia la función principal.

    int edad = 18; // Declara e inicializa una variable int.
    double promedio = 4.2; // Declara e inicializa una variable double.
    uint8_t nivelPWM = 200; // Declara e inicializa una variable uint8_t.
    uint16_t pulsos = 3500; // Declara e inicializa una variable uint16_t.

    cout << edad << endl; // Imprime la edad.
    cout << promedio << endl; // Imprime el promedio.
    cout << static_cast<int>(nivelPWM) << endl; // Imprime nivelPWM como número.
    cout << pulsos << endl; // Imprime los pulsos.

    return 0; // Finaliza el programa.
}
