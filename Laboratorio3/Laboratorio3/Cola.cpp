#include "Cola.h"
#include "Nodo.h"}
#include <iostream>
#include <string>
using namespace std;
Cola::Cola() {
	frente = nullptr;
	final = nullptr;
	longitud = 0;
}

bool Cola::esVacia() {
	if (frente == nullptr and final == nullptr)
	{
		return true;
	}

	return false;
}

void Cola::insertar(int elemento) {

	Nodo* nuevo = new Nodo(elemento);
	if (this->esVacia())
	{
		frente = nuevo;
		final = nuevo;
	}
	else
	{
		final->setSiguiente(nuevo);
		final = nuevo;
	}

	longitud++;

}

bool Cola::eliminar() {

	Nodo* aux;
	if (!(this->esVacia()))
	{
		aux = this->frente;
		this->frente = this->frente->getSiguiente();
		delete(aux);
		return true;
		longitud--;
	}
}

void Cola::mostrarCola() {
	Nodo* aux;
	aux = frente;

	while (aux != nullptr)
	{
		cout << "" << aux->getDato() << endl;
		aux = aux->getSiguiente();
	}
}