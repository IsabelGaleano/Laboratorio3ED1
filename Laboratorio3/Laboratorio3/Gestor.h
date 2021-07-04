#pragma once
#ifndef GESTOR_H
#define GESTOR_H
#include "Cola.h"
#include "Pila.h"
#include "Nodo.h"
class Gestor
{
public:
	Gestor();
	void pilaACola(Pila* pila, Cola* cola);
	void colaAPila(Pila* pila, Cola* cola);

};

#endif

