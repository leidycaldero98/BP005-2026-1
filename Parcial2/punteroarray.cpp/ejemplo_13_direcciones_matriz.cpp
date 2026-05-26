#include <iostream>

int main() {

    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int i;
    int j;

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 3; j++) {

            std::cout << "&m["
                      << i
                      << "]["
                      << j
                      << "] = "
                      << static_cast<const void *>(&m[i][j])
                      << std::endl;
        }
    }

    return 0;
}
