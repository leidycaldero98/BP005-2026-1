#include <iostream> // Incluye la librería para imprimir.

using namespace std; // Permite usar cout y endl directamente.

int main() { // Inicia la función principal.

    int a = 10; // Declara un entero con valor 10.
    int b = 3; // Declara un entero con valor 3.

    cout << a / b << endl; // Divide dos enteros y obtiene resultado entero.
    cout << 10.0 / 3 << endl; // Usa un decimal y obtiene resultado decimal.
    cout << static_cast<double>(a) / b << endl; // Convierte a double antes de dividir.

    return 0; // Finaliza el programa correctamente.
}
