const int PIN_POT = A0;

const int PIN_LED = 9;

void setup() {

    pinMode(PIN_LED, OUTPUT);
}

void loop() {

    int lectura;

    int brillo;

    lectura = analogRead(PIN_POT);

    brillo =
        map(lectura,
            0,
            1023,
            0,
            255);

    analogWrite(PIN_LED, brillo);

    delay(10);
}
