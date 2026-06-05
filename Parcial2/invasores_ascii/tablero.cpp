#include "tablero.h"
#include <iostream>

void limpiarTablero(char tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            
            if (i == 0 || i == FILAS - 1 || j == 0 || j == COLUMNAS - 1) {
                tablero[i][j] = '#'; 
            } else {
                tablero[i][j] = ' '; // Espacio vacío de juego
            }
        }
    }
}

void mostrarTablero(const char tablero[FILAS][COLUMNAS], int puntaje, int vidas) {
    
    std::cout << "\033[H"; 
    
    std::cout << "=== INVASORES ASCII ===" << std::endl;
    std::cout << "Puntaje: " << puntaje << " | Vidas: " << vidas << std::endl;
    
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << tablero[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "[A/D] Mover | [F] Disparar | [M] Memoria | [Q] Salir" << std::endl;
}
