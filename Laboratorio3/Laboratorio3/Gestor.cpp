#include "Gestor.h"


Gestor::Gestor() {

}
void Gestor::pilaACola(Pila* pila, Cola* cola) {
    int num;
    if (!(pila->esVacia()))
    {
        Nodo* nodo = new Nodo(pila->getTope()->getDato());
        nodo->setSiguiente(pila->getTope());

        cola->insertar(nodo->getDato());
        pila->pop();

        cola->mostrarCola();
    }
}

void Gestor::colaAPila(Pila* pila, Cola* cola) {
    if (!(cola->esVacia()))
    {
        Nodo* nodo = new Nodo(cola->getFrente()->getDato());
        nodo->setSiguiente(cola->getFrente());
        pila->push(nodo->getDato());
        cola->eliminar();

        pila->mostrarPila();

    }
}
