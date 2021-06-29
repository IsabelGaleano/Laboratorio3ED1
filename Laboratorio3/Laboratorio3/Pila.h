#pragma once
#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
#include <string>
class Pila
{
public:
	Pila();
	void setTope(Nodo* tope);
	Nodo* getTope();
	void setLongitud(int _longitud);
	int getLongitud();
	bool push(int data);
	bool pop();
	bool esVacia();
	void mostrarPila();
private:

	Nodo* tope;
	int longitud;
};

#endif

