/*
 * ListaCircular.cpp
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */

#include "ListaCircular.h"
#include "nodo.cpp"


template<typename T>
ListaCircular<T>::ListaCircular() {
	// TODO Auto-generated constructor stub

	cantidad=0;
	tail = NULL;

}

template<typename T>
void ListaCircular<T> :: insertar_inicio(T valor){


	    if (!tail) {
	        tail = new Nodo<T>(valor);
	        tail->siguiente=tail;
	    } else {

	    	Nodo<T> *nuevo = new Nodo<T>(valor);
	    	nuevo->siguiente=tail->siguiente;
	    	tail->siguiente=nuevo;
	    	tail=nuevo;


	    }
	    cantidad++;
}

template<typename T>
void ListaCircular<T> :: insertar_ultimo(T valor){

insertar_inicio(valor);
tail=tail->siguiente;

}



template<typename T>
T ListaCircular<T> :: eliminar_primero(){

Nodo<T> *head = tail->siguiente;
	    if (!tail) cout<<"Vacia"<<endl;

	    if(head==tail) tail=NULL;
	    else tail->siguiente=head->siguiente;
cantidad--;

return head->valor;

}

template<typename T>
void ListaCircular<T> :: rotate() {
		if (tail != NULL)
			tail = tail->siguiente;

}

template<typename T>
void ListaCircular<T>::imprimir()
{
    Nodo<T> *pivote = tail;
    if (!tail) {
        cout << "La Lista esta vacia " << endl;
    } else {
    	do{
            pivote->print();
            if (pivote->siguiente==NULL) cout << "NULL";
                pivote = pivote->siguiente;
    	}while(pivote!=tail);
  }


  cout << endl << endl;
}
