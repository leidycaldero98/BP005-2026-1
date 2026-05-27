int datos[5] = {300, 100, 700, 200, 500};

void setup() {

    Serial.begin(9600);

    int minimo = datos[0];

    int maximo = datos[0];

    for (int i = 0; i < 5; i++) {

        if (datos[i] < minimo) {

            minimo = datos[i];
        }

        if (datos[i] > maximo) {

            maximo = datos[i];
        }
    }

    Serial.print("Minimo = ");

    Serial.println(minimo);

    Serial.print("Maximo = ");

    Serial.println(maximo);
}

void loop() {
}
