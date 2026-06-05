#include "entidades.h"
#include "tablero.h"
#include <iostream>

void inicializarNave(Nave* n) {
    if (n == nullptr) return;
    n->fila = FILAS - 2; 
    n->columna = COLUMNAS / 2;
    n->vidas = 3;
}

void moverNave(Nave* n, int direccion) {
    if (n == nullptr) return;
    
    int nuevaCol = n->columna + direccion;
    
    
    if (nuevaCol >= 1 && nuevaCol <= (COLUMNAS - 2)) {
        n->columna = nuevaCol;
    }
}

void inicializarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        balas[i].activa = false;
    }
}

void dispararBala(Bala balas[], int tam, const Nave* n) {
    if (n == nullptr) return;
    
    for (int i = 0; i < tam; i++) {
        if (!balas[i].activa) {
            balas[i].fila = n->fila - 1; 
            balas[i].columna = n->columna;
            balas[i].activa = true;
            break; 
        }
    }
}

void actualizarBalas(Bala balas[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (balas[i].activa) {
            balas[i].fila--; 
            if (balas[i].fila <= 0) {
                balas[i].activa = false; 
            }
        }
    }
}

void inicializarEnemigos(Enemigo enemigos[], int tam) {
    int index = 0;
    
    for (int f = 2; f <= 4; f += 1) { 
        for (int c = 5; c < COLUMNAS - 5; c += 5) { 
            if (index < tam) {
                enemigos[index].fila = f;
                enemigos[index].columna = c;
                enemigos[index].vivo = true;
                index++;
            }
        }
    }
}

void detectarColisiones(Bala balas[], int tamB, Enemigo enemigos[], int tamE, int* puntaje, int* destruidos) {
    
    if (puntaje == nullptr || destruidos == nullptr) return;

    for (int i = 0; i < tamB; i++) {
        if (!balas[i].activa) continue;

        for (int j = 0; j < tamE; j++) {
            if (!enemigos[j].vivo) continue;

            
            if (balas[i].fila == enemigos[j].fila && balas[i].columna == enemigos[j].columna) {
                balas[i].activa = false;   
                enemigos[j].vivo = false;  
                (*puntaje) += 10;          
                (*destruidos)++;           
                break; 
            }
        }
    }
}

void mapearEntidadesATablero(char tablero[FILAS][COLUMNAS], const Nave* n, const Bala balas[], int tamB, const Enemigo enemigos[], int tamE) {
    
    for (int i = 0; i < tamE; i++) {
        if (enemigos[i].vivo) {
            tablero[enemigos[i].fila][enemigos[i].columna] = 'O';
        }
    }
    
    for (int i = 0; i < tamB; i++) {
        if (balas[i].activa) {
            tablero[balas[i].fila][balas[i].columna] = '|';
        }
    }
    
    if (n != nullptr) {
        tablero[n->fila][n->columna] = 'X';
    }
}
