#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a = 0.1 + 0.2;
    double b = 0.3;

    cout << setprecision(17) << a << endl;
    cout << setprecision(17) << b << endl;

    return 0;
}
