#include "Nodo.h"
#include <iostream>
Nodo::Nodo() {

}

Nodo::Nodo(int _dato) {
	dato = _dato;
}

void Nodo::setDato(int _dato) {
	dato = _dato;
}

int Nodo::getDato() {
	return dato;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}


