#include "teclado.h"
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

static struct termios oldt, newt;

void iniciarTeclado() {
    
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    
   
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
}

void restaurarTeclado() {
    
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

char leerTecla() {
    char ch;
    if (read(STDIN_FILENO, &ch, 1) > 0) {
        return ch;
    }
    return 0;
}
