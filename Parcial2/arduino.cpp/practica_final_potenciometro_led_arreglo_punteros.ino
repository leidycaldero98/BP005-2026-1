#include <Arduino.h>

const int PIN_POTENCIOMETRO = A0;
const int PIN_LED = 9;

const int ADC_MAX = 1023;
const int PWM_MAX = 255;

const float VREF = 5.0;

const int CANTIDAD_LECTURAS = 3;
const int PAUSA_ENTRE_LECTURAS_MS = 1;
const int PAUSA_CICLO_MS = 1;
const int UMBRAL_LED = 0;

// Prototipos
void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs);
void analizarLecturas(int datos[], int cantidad, int *promedio, int *minimo, int *maximo);
void convertirPromedio(int promedioADC, float *voltaje, int *porcentaje, int *brilloPWM);
void decidirEstadoLED(int porcentaje, int umbral, int *estadoLED);
void aplicarSalidaLED(int pinLED, int estadoLED, int brilloPWM);
void mostrarLecturas(int datos[], int cantidad);
void mostrarReporte(int promedio, int minimo, int maximo,
                    float voltaje, int porcentaje,
                    int brilloPWM, int estadoLED);

void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs)
{
    if (datos == nullptr || cantidad <= 0)
        return;

    for (int i = 0; i < cantidad; i++)
    {
        datos[i] = analogRead(pin);
        delay(pausaMs);
    }
}

void analizarLecturas(
    int datos[],
    int cantidad,
    int *promedio,
    int *minimo,
    int *maximo)
{
    if (datos == nullptr ||
        promedio == nullptr ||
        minimo == nullptr ||
        maximo == nullptr ||
        cantidad <= 0)
    {
        return;
    }

    long suma = 0;

    *minimo = datos[0];
    *maximo = datos[0];

    for (int i = 0; i < cantidad; i++)
    {
        suma += datos[i];

        if (datos[i] < *minimo)
            *minimo = datos[i];

        if (datos[i] > *maximo)
            *maximo = datos[i];
    }

    *promedio = suma / cantidad;
}

void convertirPromedio(
    int promedioADC,
    float *voltaje,
    int *porcentaje,
    int *brilloPWM)
{
    if (voltaje == nullptr ||
        porcentaje == nullptr ||
        brilloPWM == nullptr)
    {
        return;
    }

    *voltaje = (promedioADC * VREF) / ADC_MAX;

    *porcentaje =
        (long)promedioADC * 100L / ADC_MAX;

    *brilloPWM =
        (long)promedioADC * PWM_MAX / ADC_MAX;
}

void decidirEstadoLED(
    int porcentaje,
    int umbral,
    int *estadoLED)
{
    if (estadoLED == nullptr)
        return;

    if (porcentaje >= umbral)
        *estadoLED = HIGH;
    else
        *estadoLED = LOW;
}

void aplicarSalidaLED(
    int pinLED,
    int estadoLED,
    int brilloPWM)
{
    if (estadoLED == LOW)
        analogWrite(pinLED, 0);
    else
        analogWrite(pinLED, brilloPWM);
}

void mostrarLecturas(
    int datos[],
    int cantidad)
{
    if (datos == nullptr || cantidad <= 0)
        return;

    Serial.print("Lecturas: ");

    for (int i = 0; i < cantidad; i++)
    {
        Serial.print(datos[i]);
        Serial.print(" ");
    }

    Serial.println();
}

void mostrarReporte(
    int promedio,
    int minimo,
    int maximo,
    float voltaje,
    int porcentaje,
    int brilloPWM,
    int estadoLED)
{
    Serial.print("Promedio ADC = ");
    Serial.println(promedio);

    Serial.print("Minimo ADC = ");
    Serial.println(minimo);

    Serial.print("Maximo ADC = ");
    Serial.println(maximo);

    Serial.print("Voltaje = ");
    Serial.print(voltaje, 2);
    Serial.println(" V");

    Serial.print("Porcentaje = ");
    Serial.print(porcentaje);
    Serial.println(" %");

    Serial.print("Brillo PWM = ");
    Serial.println(brilloPWM);

    Serial.print("LED = ");

    if (estadoLED == HIGH)
        Serial.println("ENCENDIDO");
    else
        Serial.println("APAGADO");

    Serial.println("----------------------------------------");
}

void setup()
{
    Serial.begin(9600);
    pinMode(PIN_LED, OUTPUT);
}

void loop()
{
    int lecturas[CANTIDAD_LECTURAS];

    int promedio = 0;
    int minimo = 0;
    int maximo = 0;

    float voltaje = 0.0;

    int porcentaje = 0;
    int brilloPWM = 0;
    int estadoLED = LOW;

    tomarLecturas(
        PIN_POTENCIOMETRO,
        lecturas,
        CANTIDAD_LECTURAS,
        PAUSA_ENTRE_LECTURAS_MS);

    analizarLecturas(
        lecturas,
        CANTIDAD_LECTURAS,
        &promedio,
        &minimo,
        &maximo);

    convertirPromedio(
        promedio,
        &voltaje,
        &porcentaje,
        &brilloPWM);

    decidirEstadoLED(
        porcentaje,
        UMBRAL_LED,
        &estadoLED);

    aplicarSalidaLED(
        PIN_LED,
        estadoLED,
        brilloPWM);

    mostrarLecturas(
        lecturas,
        CANTIDAD_LECTURAS);

    mostrarReporte(
        promedio,
        minimo,
        maximo,
        voltaje,
        porcentaje,
        brilloPWM,
        estadoLED);

    delay(PAUSA_CICLO_MS);
}
