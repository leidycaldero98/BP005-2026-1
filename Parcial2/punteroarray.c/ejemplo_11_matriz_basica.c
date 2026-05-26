#include <stdio.h>

int main() {

    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("m[0][0] = %d\n", m[0][0]);
    printf("m[0][2] = %d\n", m[0][2]);
    printf("m[1][1] = %d\n", m[1][1]);

    return 0;
}
