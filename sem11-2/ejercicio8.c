#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    int altura;
    struct nodo *izq;
    struct nodo *der;
} Nodo;

int obtenerAltura(Nodo *n) {
    if (n == NULL)
        return 0;
    return n->altura;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int obtenerBalance(Nodo *n) {
    if (n == NULL)
        return 0;
    return obtenerAltura(n->izq) - obtenerAltura(n->der);
}

Nodo* rotacionDerecha(Nodo *y) {
    Nodo *x = y->izq;
    Nodo *at = x->der; //at es arbol temporal
    x->der = y;
    y->izq = at;
    y->altura = max(obtenerAltura(y->izq), obtenerAltura(y->der)) + 1;
    x->altura = max(obtenerAltura(x->izq), obtenerAltura(x->der)) + 1;

    return x;
}

Nodo* rotacionIzquierda(Nodo *x) {
    Nodo *y = x->der;
    Nodo *at = y->izq;

    y->izq = x;
    x->der = at;

    x->altura = max(obtenerAltura(x->izq), obtenerAltura(x->der)) + 1;
    y->altura = max(obtenerAltura(y->izq), obtenerAltura(y->der)) + 1;
    return y;
}

Nodo* Insertar(Nodo *nodoActual, int nuevoValor){
    if (nodoActual == NULL){
        Nodo *nuevo = malloc(sizeof(Nodo));
        nuevo->valor = nuevoValor;
        nuevo->altura = 1;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        return nuevo;
    }
    
    if (nuevoValor < nodoActual->valor) {
        nodoActual->izq = Insertar(nodoActual->izq, nuevoValor);    
    } else if (nuevoValor > nodoActual->valor) {
        nodoActual->der = Insertar(nodoActual->der, nuevoValor);
    } else {
        return nodoActual;
    }

    nodoActual->altura = 1 + max(obtenerAltura(nodoActual->izq), obtenerAltura(nodoActual->der));
    int balance = obtenerBalance(nodoActual);

    if (balance > 1 && nuevoValor < nodoActual->izq->valor)
        return rotacionDerecha(nodoActual);
    if (balance < -1 && nuevoValor > nodoActual->der->valor)
        return rotacionIzquierda(nodoActual);
    if (balance > 1 && nuevoValor > nodoActual->izq->valor) {
        nodoActual->izq = rotacionIzquierda(nodoActual->izq);
        return rotacionDerecha(nodoActual);
    }
    if (balance < -1 && nuevoValor < nodoActual->der->valor) {
        nodoActual->der = rotacionDerecha(nodoActual->der);
        return rotacionIzquierda(nodoActual);
    }
    return nodoActual;
}

int Buscar(Nodo *nodoActual, int valorBuscado){
    if (nodoActual == NULL){
        return 0;
    }
    if (valorBuscado == nodoActual->valor){
        return 1;
    }
    //comienza a profundizar la busqueda en las ramas del arbol
    if (valorBuscado < nodoActual->valor){
        return Buscar(nodoActual->izq, valorBuscado);
    }else{
        return Buscar(nodoActual->der, valorBuscado);
    }
}

int main(){
    Nodo *arbol1 = NULL;

    arbol1 = Insertar(arbol1, 10);
    arbol1 = Insertar(arbol1, 12); //rama derecha
    arbol1 = Insertar(arbol1, 7);  //rama izquierda

    int encontrado = Buscar(arbol1, 15);
    if (encontrado){
        printf("Valor encontrado\n");
    }else printf("Valor no encontrado\n");
    
    return 0;
}
