#include <stdio.h>

struct Resultado {
    int suma;
    int resta;
};

struct Resultado operaciones(int a, int b) {
    struct Resultado resultado;
    resultado.suma = a + b;
    resultado.resta = a - b;
    return resultado;
};

void imprimir(struct Resultado *resultado) {
    printf("La suma es %d\n", resultado->suma);
    printf("La resta es %d\n", resultado->resta);
}

int main() {
    int a = 3;
    int b = 2;
    struct Resultado rf = operaciones(a, b);
    imprimir(&rf);
    return 0;
}
