#ifndef TABLERO_H
#define TABLERO_H


const int FILAS = 20;
const int COLUMNAS = 40;


void limpiarTablero(char tablero[FILAS][COLUMNAS]);


void mostrarTablero(const char tablero[FILAS][COLUMNAS], int puntaje, int vidas);

#endif
