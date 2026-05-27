const int PIN_POTENCIOMETRO = A0;

void setup() {

    Serial.begin(9600);
}

void loop() {

    int lecturaADC;

    lecturaADC =
        analogRead(PIN_POTENCIOMETRO);

    Serial.print("Lectura ADC = ");

    Serial.println(lecturaADC);

    delay(200);
}
