#ifndef ENTIDADES_H
#define ENTIDADES_H

const int MAX_BALAS = 10;
const int MAX_ENEMIGOS = 18;

struct Nave {
    int fila;
    int columna;
    int vidas;
};

struct Bala {
    int fila;
    int columna;
    bool activa;
};

struct Enemigo {
    int fila;
    int columna;
    bool vivo;
};


void inicializarNave(Nave* n);
void moverNave(Nave* n, int direccion); 


void inicializarBalas(Bala balas[], int tam);
void dispararBala(Bala balas[], int tam, const Nave* n);
void actualizarBalas(Bala balas[], int tam);

void inicializarEnemigos(Enemigo enemigos[], int tam);


void detectarColisiones(Bala balas[], int tamB, Enemigo enemigos[], int tamE, int* puntaje, int* destruidos);
void mapearEntidadesATablero(char tablero[20][40], const Nave* n, const Bala balas[], int tamB, const Enemigo enemigos[], int tamE);

#endif
