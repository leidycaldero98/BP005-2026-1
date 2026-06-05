#include <iostream>

using namespace std;

int main() {

    double nota;

    cout << "Ingrese la nota: ";
    cin >> nota;

    if (nota >= 3.0) {

        cout << "Aprobado" << endl;

    } else {

        cout << "Reprobado" << endl;
    }

    return 0;
}
