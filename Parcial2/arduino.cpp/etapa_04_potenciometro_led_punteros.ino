const int PIN_POTENCIOMETRO = A0;

const int PIN_LED = 9;

const int ADC_MAX = 1023;

const int PWM_MAX = 255;

void analizarLectura(int valorADC,
                     float *voltaje,
                     int *porcentaje,
                     int *brilloPWM) {

    *voltaje =
        (valorADC * 5.0)
        / ADC_MAX;

    *porcentaje =
        ((long)valorADC * 100)
        / ADC_MAX;

    *brilloPWM =
        ((long)valorADC * PWM_MAX)
        / ADC_MAX;
}

void setup() {

    Serial.begin(9600);

    pinMode(PIN_LED, OUTPUT);
}

void loop() {

    int valorADC =
        analogRead(
            PIN_POTENCIOMETRO
        );

    float voltaje;

    int porcentaje;

    int brilloPWM;

    analizarLectura(
        valorADC,
        &voltaje,
        &porcentaje,
        &brilloPWM
    );

    analogWrite(
        PIN_LED,
        brilloPWM
    );

    Serial.print("ADC = ");

    Serial.print(valorADC);

    Serial.print(" | Voltaje = ");

    Serial.print(voltaje, 2);

    Serial.print(" V");

    Serial.print(" | Porcentaje = ");

    Serial.print(porcentaje);

    Serial.print(" %");

    Serial.print(" | PWM = ");

    Serial.println(brilloPWM);

    delay(200);
}
