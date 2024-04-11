#include <iostream>

using namespace std;

struct NodoArbol {
    int dato;
    NodoArbol *izquierda;
    NodoArbol *derecha;
};

NodoArbol* creaNodo(int dato) {
    NodoArbol *nuevoNodo = new NodoArbol();
    nuevoNodo->dato = dato;
    nuevoNodo->izquierda = nullptr;
    nuevoNodo->derecha = nullptr;
    return nuevoNodo;
}

void insertar(NodoArbol* raiz, int dato) {
    if (raiz == nullptr) {
        raiz = creaNodo(dato);
    }
    else {
        if (dato < raiz->dato) {
            insertar(raiz->izquierda, dato);
        }
        else {
            insertar(raiz->derecha, dato);
        }
    }
}

int main(int, char**){
    NodoArbol *raiz = new NodoArbol();
    // Insertar
    insertar(raiz, 50);
    insertar(raiz, 30);
    insertar(raiz, 70);
    return 0;
}
