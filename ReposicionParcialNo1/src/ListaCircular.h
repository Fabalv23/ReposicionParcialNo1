/*
 * ListaCircular.h
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */
#ifndef LISTACIRCULAR_H_
#define LISTACIRCULAR_H_
#include "nodo.h"

template<class T>
class ListaCircular {
public:
		ListaCircular();
		void insertar_inicio(T);
		void insertar_ultimo(T);
		T eliminar_primero();
		void rotate();

		void imprimir();

private:
	Nodo<T> *tail;
	int cantidad;


};




#endif /* LISTACIRCULAR_H_ */

