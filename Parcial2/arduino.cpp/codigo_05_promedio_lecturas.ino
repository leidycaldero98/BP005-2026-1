int datos[5] = {100, 200, 300, 400, 500};

void setup() {

    Serial.begin(9600);

    long suma = 0;

    int promedio;

    for (int i = 0; i < 5; i++) {

        suma += datos[i];
    }

    promedio = suma / 5;

    Serial.print("Promedio = ");

    Serial.println(promedio);
}

void loop() {
}
