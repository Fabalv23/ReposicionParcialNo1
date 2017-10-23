/*
 * ListaEnlazada.cpp
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */

#include "ListaEnlazada.h"

using namespace std;

template<typename T>

ListaEnlazada<T>::ListaEnlazada(){
cantidad=0;
head = NULL;
}


template<typename T>

Pila<T>::Pila(){
tamanio=0;
}

template<typename T>

Cola<T>::Cola(){
tamanio=0;
}


//Inserta inicio
template<typename T>
void ListaEnlazada<T> :: insertar_inicio(T valor){

	Nodo<T> *nuevo = new Nodo<T>(valor);
	    Nodo<T> *temp = head;

	    if (!head) {
	        head = nuevo;
	    } else {
	        nuevo->siguiente= nuevo;
	        head = nuevo;
	        head->siguiente = temp;
	    }
	    cantidad++;
}

//Inserta de ultimo
template<typename T>
void ListaEnlazada<T> :: insertar_ultimo(T valor){

	Nodo<T> *nuevo = new Nodo<T>(valor);
	    Nodo<T> *temp = head;

	    if (!head) {
	        head = nuevo;
	    } else {
	        while(temp->siguiente!=NULL){
	        	temp = temp->siguiente;
	        }
	    	temp->siguiente=nuevo;

	    }
	    cantidad++;
}

//Imprime la lista
template<typename T>
void ListaEnlazada<T>::imprimir()
{
    Nodo<T> *pivote = head;
    if (!head) {
        cout << "La Lista esta vacia " << endl;
    } else {
        while (pivote!=NULL) {
            pivote->print();
            if (!pivote->siguiente) cout << "NULL";
                pivote = pivote->siguiente;
        }
  }
  cout << endl << endl;
}

//Elimina el primero
template<typename T>
T ListaEnlazada<T> :: eliminar_primero(){


	    Nodo<T> *temp = head;
	    T respuesta;
	    if (!head) {
	         cout<<"Vacio"<<endl;
	    } else {

	        respuesta = head->valor;
	    	head=temp->siguiente;
	    }
	    cantidad--;
	    return respuesta;
}
