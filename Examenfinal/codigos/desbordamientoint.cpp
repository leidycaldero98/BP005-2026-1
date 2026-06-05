#include <iostream>
#include <cstdint>

using namespace std;

int main() {

    int8_t valor = 127;

    valor = valor + 1;

    cout << static_cast<int>(valor) << endl;

    return 0;
}
