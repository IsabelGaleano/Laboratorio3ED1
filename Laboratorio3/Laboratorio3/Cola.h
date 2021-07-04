#pragma once
#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
#include <iostream>
#include <string>
class Cola
{
public:
	Cola();
	void setFrente(Nodo* frente);
	Nodo* getFrente();
	void setFinal(Nodo* final);
	Nodo* getFinal();
	void setLongitud(int longitud);
	int getLongitud();
	void insertar(int elemento);
	bool eliminar();
	bool esVacia();
	void mostrarCola();
private:
	Nodo* frente;
	Nodo* final;
	int longitud;

};

#endif

