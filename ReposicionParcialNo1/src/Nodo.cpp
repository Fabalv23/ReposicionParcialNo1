/*
 * Nodo.cpp
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */

#include "Nodo.h"


#include "Nodo.h"


template<typename T>


Nodo<T>::Nodo(T valor_)
{
    valor = valor_;
    siguiente = NULL;
}

// Imprimir un Nodo
template<typename T>
void Nodo<T>::print()
{

    cout<< valor << "-> ";
}


