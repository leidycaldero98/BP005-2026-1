const int PIN_POTENCIOMETRO = A0;

const int ADC_MAX = 1023;

const float VREF = 5.0;

void analizarLectura(
    int valorADC,
    float *voltaje,
    int *porcentaje
) {

 
    *voltaje =
        (valorADC * VREF)
        / ADC_MAX;


    *porcentaje =
        ((long)valorADC * 100)
        / ADC_MAX;
}

void mostrarDatos(
    int valorADC,
    float voltaje,
    int porcentaje
) {

    Serial.print("ADC = ");

    Serial.print(valorADC);

    Serial.print(" | Voltaje = ");

    Serial.print(voltaje, 2);

    Serial.print(" V");

    Serial.print(" | Porcentaje = ");

    Serial.print(porcentaje);

    Serial.println(" %");
}

void setup() {

    Serial.begin(9600);
}

void loop() {

    /*
    Leemos el potenciómetro.
    */

    int valorADC =
        analogRead(
            PIN_POTENCIOMETRO
        );

    /*
    Variables donde guardaremos
    resultados calculados.
    */

    float voltaje;

    int porcentaje;

    /*
    La función modifica las variables
    usando punteros.
    */

    analizarLectura(
        valorADC,
        &voltaje,
        &porcentaje
    );

    /*
    Mostramos resultados.
    */

    mostrarDatos(
        valorADC,
        voltaje,
        porcentaje
    );

    delay(500);
}
