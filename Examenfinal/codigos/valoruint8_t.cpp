#include <iostream>
#include <cstdint>

using namespace std;

int main() {

    int valorIngresado;
    uint8_t valorFinal;

    cout << "Ingrese un valor entre 0 y 255: ";
    cin >> valorIngresado;

    if (valorIngresado >= 0 && valorIngresado <= 255) {

        valorFinal = static_cast<uint8_t>(valorIngresado);

        cout << static_cast<int>(valorFinal) << endl;

    } else {

        cout << "Valor fuera de rango" << endl;
    }

    return 0;
}
