const int PIN_POT = A0;

const int CANTIDAD = 10;

int lecturas[CANTIDAD];

void setup() {

    Serial.begin(9600);
}

void loop() {

    for (int i = 0;
         i < CANTIDAD;
         i++) {

        lecturas[i] =
            analogRead(PIN_POT);

        Serial.println(lecturas[i]);

        delay(100);
    }

    Serial.println("----------------");
}
