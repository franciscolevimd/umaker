#include <cstdio>
#include <cstring>

struct Humano {
    char nombre[10];
    int edad;
    void (*impirimirDatos)(char[], int); // Esto es para meter procedimientos/funciones 
                                         // a las estucturas en C.
};

void impirimirDatos(char nombre[], int edad) {
    printf("El nombre es %s\n", nombre);
    printf("La edad es %d\n", edad);
}

int main(int, char**) { 
    Humano levi;
    levi.impirimirDatos = &impirimirDatos;
    strcpy(levi.nombre, "Leví");
    levi.edad = 38;
    levi.impirimirDatos(levi.nombre, levi.edad);
    return 0;
}
