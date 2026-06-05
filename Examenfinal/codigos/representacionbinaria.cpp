#include <iostream>
#include <cstdint>
#include <bitset>

using namespace std;

int main() {

    uint8_t a = 5;

    uint8_t b = 255;

    int8_t c = -1;

    cout << bitset<8>(a) << endl;

    cout << bitset<8>(b) << endl;

    cout << bitset<8>(static_cast<uint8_t>(c)) << endl;

    return 0;
}
