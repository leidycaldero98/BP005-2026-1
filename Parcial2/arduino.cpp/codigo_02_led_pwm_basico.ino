const int PIN_LED = 9;

void setup() {

    pinMode(PIN_LED, OUTPUT);
}

void loop() {

    analogWrite(PIN_LED, 50);

    delay(1000);

    analogWrite(PIN_LED, 255);

    delay(1000);
}
