const int PIN_POTENCIOMETRO = A0;

const int CANTIDAD_LECTURAS = 10;

int lecturas[CANTIDAD_LECTURAS];

void tomarLecturas(
    int pin,
    int datos[],
    int cantidad
) {

    for (
        int i = 0;
        i < cantidad;
        i++
    ) {

        datos[i] =
            analogRead(pin);

        delay(20);
    }
}

void analizarLecturas(
    int datos[],
    int cantidad,
    int *promedio,
    int *minimo,
    int *maximo
) {

    long suma = 0;

    *minimo = datos[0];

    *maximo = datos[0];

    for (
        int i = 0;
        i < cantidad;
        i++
    ) {

        suma += datos[i];

        if (
            datos[i] < *minimo
        ) {

            *minimo = datos[i];
        }

        if (
            datos[i] > *maximo
        ) {

            *maximo = datos[i];
        }
    }

    *promedio =
        (int)(
            suma / cantidad
        );
}

void mostrarLecturas(
    int datos[],
    int cantidad
) {

    Serial.println(
        "Lecturas:"
    );

    for (
        int i = 0;
        i < cantidad;
        i++
    ) {

        Serial.println(
            datos[i]
        );
    }
}

void setup() {

    Serial.begin(9600);
}

void loop() {

    int promedio;

    int minimo;

    int maximo;

    tomarLecturas(
        PIN_POTENCIOMETRO,
        lecturas,
        CANTIDAD_LECTURAS
    );

    analizarLecturas(
        lecturas,
        CANTIDAD_LECTURAS,
        &promedio,
        &minimo,
        &maximo
    );

    mostrarLecturas(
        lecturas,
        CANTIDAD_LECTURAS
    );

    Serial.print(
        "Promedio = "
    );

    Serial.println(
        promedio
    );

    Serial.print(
        "Minimo = "
    );

    Serial.println(
        minimo
    );

    Serial.print(
        "Maximo = "
    );

    Serial.println(
        maximo
    );

    Serial.println(
        "----------------"
    );

    delay(1000);
}
