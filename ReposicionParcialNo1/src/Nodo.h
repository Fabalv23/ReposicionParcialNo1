/*
 * Nodo.h
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */
#ifndef NODO_H_
#define NODO_H_

#include <iostream>

using namespace std;


template <class T>

class Nodo {
public:
	Nodo();


	Nodo(T);
	Nodo *siguiente;
	T valor;

	void print();

};


#endif /* NODO_H_ */
