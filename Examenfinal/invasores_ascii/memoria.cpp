#include "memoria.h"
#include "tablero.h"
#include "teclado.h"  
#include <unistd.h>    
#include <iostream>

void mostrarReporteMemoria(const Nave* n, const Bala balas[], int tamB, const Enemigo enemigos[], int tamE, const Juego* j) {
    
    std::cout << "\033[2J\033[1;1H";
    std::cout << "=========================================" << std::endl;
    std::cout << "          REPORTE DE MEMORIA RAM         " << std::endl;
    std::cout << "=========================================" << std::endl;
    
    std::cout << "-> Tipos de datos base (Estructuras):" << std::endl;
    std::cout << "   sizeof(Nave):     " << sizeof(Nave) << " bytes." << std::endl;
    std::cout << "   sizeof(Bala):     " << sizeof(Bala) << " bytes." << std::endl;
    std::cout << "   sizeof(Enemigo):  " << sizeof(Enemigo) << " bytes." << std::endl;
    std::cout << "   sizeof(Juego):    " << sizeof(Juego) << " bytes." << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    
    std::cout << "-> Instancias y Arreglos en ejecucion:" << std::endl;
    std::cout << "   Objeto Nave (n):                 " << (n != nullptr ? sizeof(*n) : 0) << " bytes." << std::endl;
    std::cout << "   Arreglo balas[" << tamB << "]:            " << (sizeof(Bala) * tamB) << " bytes." << std::endl;
    std::cout << "   Arreglo enemigos[" << tamE << "]:         " << (sizeof(Enemigo) * tamE) << " bytes." << std::endl;
    std::cout << "   Matriz tablero[" << FILAS << "][" << COLUMNAS << "]:   " << (FILAS * COLUMNAS * sizeof(char)) << " bytes." << std::endl;
    std::cout << "   Objeto Estado Juego (j):         " << (j != nullptr ? sizeof(*j) : 0) << " bytes." << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    
    size_t totalEstatico = sizeof(Nave) + (sizeof(Bala) * tamB) + (sizeof(Enemigo) * tamE) + (FILAS * COLUMNAS) + sizeof(Juego);
    std::cout << "Memoria estatica aproximada asignada: " << totalEstatico << " bytes." << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "Presione cualquier tecla para volver al juego..." << std::endl;
    
    
    while(true) {
        char c = leerTecla(); 
        if(c != 0) break;
        usleep(50000);        
    }
    std::cout << "\033[2J"; 
}
