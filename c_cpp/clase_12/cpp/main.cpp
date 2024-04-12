#include "mi_lib.h"

#include <iostream>

int main(int, char**) {
    Humano juan("Juan",27); //Humano("Juan",27);
    juan.mostrarDatos();
    juan.setEdad(38);
    juan.mostrarDatos();
    printf("El valor de la edad es %d\n", juan.getEdad());
    return 0;
}
