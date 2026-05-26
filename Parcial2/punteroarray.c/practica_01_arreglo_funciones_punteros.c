#include <stdio.h>

void leerArreglo(int *datos, int n) {

    int i;

    if (datos == NULL) {
        return;
    }

    for (i = 0; i < n; i++) {

        printf("Ingrese datos[%d]: ", i);
        scanf("%d", &datos[i]);
    }
}

void mostrarArreglo(int *datos, int n) {

    int i;

    if (datos == NULL) {
        return;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }

    printf("\n");
}

void analizarArreglo(int *datos,
                     int n,
                     int *suma,
                     float *promedio) {

    int i;

    if (datos == NULL ||
        suma == NULL ||
        promedio == NULL) {
        return;
    }

    *suma = 0;

    for (i = 0; i < n; i++) {
        *suma = *suma + datos[i];
    }

    *promedio = (float)(*suma) / n;
}

int main() {

    int datos[5];

    int suma;
    float promedio;

    leerArreglo(datos, 5);

    mostrarArreglo(datos, 5);

    analizarArreglo(datos, 5, &suma, &promedio);

    printf("Suma = %d\n", suma);
    printf("Promedio = %.2f\n", promedio);

    return 0;
}
