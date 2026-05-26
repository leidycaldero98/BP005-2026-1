#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int i;

    int *datos = NULL;

    printf("Cuantos enteros desea guardar: ");
    scanf("%d", &n);

    datos = malloc(n * sizeof(int));

    if (datos == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {

        printf("Ingrese datos[%d]: ", i);
        scanf("%d", &datos[i]);
    }

    printf("Datos ingresados: ");

    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }

    printf("\n");

    free(datos);
    datos = NULL;

    return 0;
}
