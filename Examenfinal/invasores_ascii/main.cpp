#include <iostream>
#include <unistd.h> 
#include <cctype>  
#include "teclado.h"
#include "tablero.h"
#include "entidades.h"
#include "juego.h"
#include "memoria.h"

int main() {
    
    iniciarTeclado();
    std::cout << "\033[2J"; 

    
    char tablero[FILAS][COLUMNAS];
    Nave jugador;
    Bala listadoBalas[MAX_BALAS];
    Enemigo listadoEnemigos[MAX_ENEMIGOS];
    Juego controlJuego;

    
    inicializarJuego(&controlJuego);
    inicializarNave(&jugador);
    inicializarBalas(listadoBalas, MAX_BALAS);
    inicializarEnemigos(listadoEnemigos, MAX_ENEMIGOS);

    
    while (!controlJuego.terminado) {
        
        
        char tecla = leerTecla();
        if (tecla != 0) {
            tecla = std::tolower(tecla); 
        }

        switch (tecla) {
            case 'a':
                moverNave(&jugador, -1); 
                break;
            case 'd':
                moverNave(&jugador, 1);  
                break;
            case 'f':
                dispararBala(listadoBalas, MAX_BALAS, &jugador);
                break;
            case 'm':
                
                mostrarReporteMemoria(&jugador, listadoBalas, MAX_BALAS, listadoEnemigos, MAX_ENEMIGOS, &controlJuego);
                break;
            case 'q':
                controlJuego.terminado = true;
                break;
        }

        
        actualizarBalas(listadoBalas, MAX_BALAS);
        
        
        detectarColisiones(listadoBalas, MAX_BALAS, listadoEnemigos, MAX_ENEMIGOS, &controlJuego.puntaje, &controlJuego.enemigosDestruidos);
        
        
        verificarVictoria(&controlJuego, MAX_ENEMIGOS);

        
        limpiarTablero(tablero);
        mapearEntidadesATablero(tablero, &jugador, listadoBalas, MAX_BALAS, listadoEnemigos, MAX_ENEMIGOS);
        mostrarTablero(tablero, controlJuego.puntaje, jugador.vidas);

        
        usleep(33000); 
    }

    
    std::cout << "\033[2J\033[1;1H"; 
    
    if (controlJuego.victoria) {
        std::cout << "=========================================" << std::endl;
        std::cout << "       ¡VICTORIA! PROYECTO GANADO        " << std::endl;
        std::cout << "   Todos los invasores fueron destruidos.  " << std::endl;
        std::cout << "   Puntaje Final: " << controlJuego.puntaje << " Puntos." << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "¿Deseas reiniciar la partida? (Presiona 'r'), o cualquier otra tecla para salir..." << std::endl;
        
        
        usleep(500000); 
        char r = 0;
        while(r == 0) { 
            r = leerTecla(); 
        }
        
        if (std::tolower(r) == 'r') {
            restaurarTeclado(); 
            return main();      
        }
    } else {
        std::cout << "Juego cerrado correctamente de forma ordenada. ¡Hasta la próxima!" << std::endl;
    }

    
    restaurarTeclado();
    return 0;
}
