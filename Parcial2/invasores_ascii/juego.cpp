#include "juego.h"

void inicializarJuego(Juego* j) {
    if (j == nullptr) return;
    j->puntaje = 0;
    j->enemigosDestruidos = 0;
    j->terminado = false;
    j->victoria = false;
}

void verificarVictoria(Juego* j, int totalEnemigos) {
    if (j == nullptr) return;
    if (j->enemigosDestruidos >= totalEnemigos) {
        j->victoria = true;
        j->terminado = true;
    }
}
