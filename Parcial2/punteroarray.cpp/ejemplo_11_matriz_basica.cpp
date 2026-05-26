#include <iostream>

int main() {

    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "m[0][0] = "
              << m[0][0] << std::endl;

    std::cout << "m[0][2] = "
              << m[0][2] << std::endl;

    std::cout << "m[1][1] = "
              << m[1][1] << std::endl;

    return 0;
}
