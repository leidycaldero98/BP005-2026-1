#include <stdio.h>
#include <stddef.h>

void intercambiar(int *a, int *b) {

    if (a == NULL || b == NULL) {
        return;
    }

    int temp = *a;

    *a = *b;

    *b = temp;
}

int main(void) {

    int x = 10;

    int y = 20;

    printf("Antes: x = %d, y = %d\n",
           x, y);

    intercambiar(&x, &y);

    printf("Despues: x = %d, y = %d\n",
           x, y);

    return 0;
}
