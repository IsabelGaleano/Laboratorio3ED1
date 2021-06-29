#include "Pila.h"
#include "Nodo.h"
#include <iostream>
#include <string>
using namespace std;
Pila::Pila() {
	tope = nullptr;
	longitud = 0;
}

bool Pila::esVacia() {
	if (tope == nullptr)
	{
		return true;
	}

	return false;
}

bool Pila::push(int dato) {
	Nodo* nuevo = new Nodo(dato);
	if (nuevo == nullptr)
	{
		return false;
	}
	else
	{
		if (this->esVacia())
		{
			tope = nuevo;
		}
		else
		{
			nuevo->setSiguiente(tope);
			tope = nuevo;
		}

		longitud++;
		return true;
	}
}

bool Pila::pop() {
	Nodo* aux;
	if (!(this->esVacia()))
	{
		aux = tope;
		tope = tope->getSiguiente();
		longitud--;
		delete aux;
		return true;
	}
	else
	{
		return false;
	}
}

void Pila::mostrarPila() {
	Nodo* aux;
	aux = tope;
	while (aux != nullptr)
	{
		cout << "\t" << aux->getDato() << endl;
		aux = aux->getSiguiente();
	}
}