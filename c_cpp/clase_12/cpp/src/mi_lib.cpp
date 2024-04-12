#include "mi_lib.h"

#include <iostream>
#include <string>

Humano::Humano(std::string _nombre,int _edad) {
    this->nombre = _nombre;
    this->edad = _edad;
}

void Humano::mostrarDatos(){
    std::cout << "El nombre es: " << nombre << "\n";
    std::cout << "La edad es: " << edad << "\n";
}

void Humano::setEdad(int e) {
    edad = e;
}

int Humano::getEdad() {
    return edad;
}