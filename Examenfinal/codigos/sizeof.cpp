#include <iostream> // Permite usar cout y endl.
using namespace std; // Evita escribir std:: antes de cout y endl.

int main() { // Inicia la función principal.

    cout << "bool: " << sizeof(bool) << " bytes" << endl; // Tamaño de bool.
    cout << "char: " << sizeof(char) << " bytes" << endl; // Tamaño de char.
    cout << "short: " << sizeof(short) << " bytes" << endl; // Tamaño de short.
    cout << "int: " << sizeof(int) << " bytes" << endl; // Tamaño de int.
    cout << "long: " << sizeof(long) << " bytes" << endl; // Tamaño de long.
    cout << "long long: " << sizeof(long long) << " bytes" << endl; // Tamaño de long long.
    cout << "float: " << sizeof(float) << " bytes" << endl; // Tamaño de float.
    cout << "double: " << sizeof(double) << " bytes" << endl; // Tamaño de double.

    return 0; // Finaliza el programa correctamente.
}
