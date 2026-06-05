#include <iostream>

using namespace std;

int main() {

    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    cout << "Ingrese el total de segundos: ";
    cin >> totalSegundos;

    horas = totalSegundos / 3600;

    totalSegundos = totalSegundos % 3600;

    minutos = totalSegundos / 60;

    segundos = totalSegundos % 60;

    cout << horas << " h, "
         << minutos << " min, "
         << segundos << " s" << endl;

    return 0;
}
