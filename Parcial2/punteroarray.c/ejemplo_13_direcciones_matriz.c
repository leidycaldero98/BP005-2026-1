#include <stdio.h>

int main() {

    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int i;
    int j;

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 3; j++) {

            printf("&m[%d][%d] = %p\n",
                   i, j, (void *)&m[i][j]);
        }
    }

    return 0;
}
