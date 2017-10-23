/*
 * NodoDoble.h
 *
 *  Created on: 22 oct. 2017
 *      Author: fabia
 */

#ifndef NODODOBLE_H_
#define NODODOBLE_H_
template<class T>
class NodoDoble {
public:


 NodoDoble(T v, NodoDoble<T> *sig = 0, NodoDoble<T> *ant = 0);

private:
 T valor;
 NodoDoble<T> *siguiente;
 NodoDoble<T> *anterior;
};

#endif /* NODODOBLE_H_ */
