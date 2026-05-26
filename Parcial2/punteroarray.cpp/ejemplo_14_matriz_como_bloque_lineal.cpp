#include <iostream>

int main() {

    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int *p = &m[0][0];

    int total = 2 * 3;

    int k;

    for (k = 0; k < total; k++) {

        std::cout << *(p + k) << " ";
    }

    std::cout << std::endl;

    return 0;
}
