const int PIN_POT = A0;

void setup() {

    Serial.begin(9600);
}

void loop() {

    int lectura;

    lectura = analogRead(PIN_POT);

    Serial.println(lectura);

    delay(200);
}
