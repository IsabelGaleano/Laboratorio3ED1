// Laboratorio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Cola.h"
#include "Pila.h"
#include "Nodo.h"
#include "Gestor.h"
#include <string>
#include <iostream>
using namespace std;


void imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Realizar push a la pila\n";
    cout << "\n 2: Realizar pop a la pila \n";
    cout << "\n 3: Mostar pila\n";
    cout << "\n 4: Agregar elemento a la cola \n";
    cout << "\n 5: Eliminar cola \n";
    cout << "\n 6: Mostrar cola\n";
    cout << "\n 7: Pasar de pila a cola \n";
    cout << "\n 8: Pasar de cola a pila \n";
    cout << "\n 9: Salir del programa \n";

}

int leerOpcion() {
    int opcion;
    cout << "Selecciona una opcion: "; cin >> opcion;
    return opcion;

}


bool ejecutarOpcion(int opcion, Pila* pila, Cola* cola) {
    bool salir = false;
    int numero;
    string info;
    Gestor* gestor = new Gestor();
    switch (opcion) {
    case 1:
        cout << "***Agregar elemento a la pila***\n";
        cout << "Ingrese un numero: "; cin >> numero;
        pila->push(numero);
        pila->mostrarPila();
        break;
    case 2:
        cout << "***Eliminar pila***\n";
        if (pila->pop())
        {
            cout << "Pila eliminada correctamente" << endl;
            pila->mostrarPila();
        }
        break;
    case 3:
        cout << "***Mostrar Pila***\n";
        pila->mostrarPila();
        break;
    case 4:
        cout << "***Agregar elemento a la cola***\n";
        cout << "Ingrese un numero: "; cin >> numero;
        cola->insertar(numero);
        cola->mostrarCola();
        break;

    case 5:
        cout << "***Eliminar Cola***\n";
        if (cola->eliminar())
        {
            cout << "Cola eliminada correctamente" << endl;
            cola->mostrarCola();
        }
        break;
    case 6:
        cout << "***Mostrar Cola***\n";
        cola->mostrarCola();
        break;

    case 7:
        cout << "***Pasar de pila a cola***\n";
        gestor->pilaACola(pila, cola);
        break;
    case 8:
        cout << "***Pasar de cola a pila***\n";
        gestor->colaAPila(pila, cola);
        break;
    case 9:
        salir = true;

    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}




int main()
{

    Pila* pila = new Pila();
    Cola* cola = new Cola();
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion, pila, cola);

    } while (!salir);

    return 0;
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
