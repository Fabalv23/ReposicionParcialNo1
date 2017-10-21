/*
 * ListaEnlazada.h
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */

#ifndef LISTAENLAZADA_H_
#define LISTAENLAZADA_H_
#include "nodo.h"
#include "nodo.cpp"
#include <iostream>
#include <vector>
using namespace std;


template<class T>

//Lista enlazada y Lista
class ListaEnlazada{
public:
	ListaEnlazada();
	void insertar_inicio(T);
	void insertar_ultimo(T);
	T eliminar_primero();
	void imprimir();

	int cantidad;
private:
	Nodo<T> *head;


};

//Implementacion de Pila
template<class T>
class Pila : public ListaEnlazada<T> {
public:
	Pila();
	void push(T v){
		tamanio++;
		this->insertar_inicio(v);

	}

	T pop(){
		tamanio--;
		return this->eliminar_primero();

	}


	int tamanio;
};


//Implementacion de Cola
template<class T>
class Cola : public ListaEnlazada<T> {
public:
	Cola();
	void encolar(T v){
		tamanio++;
		this->insertar_ultimo(v);
	}

	T desencolar(){
		tamanio--;
		return this->eliminar_primero();
	}

	int tamanio;

};

#endif /* LISTAENLAZADA_H_ */
