/*
 * Main.cpp
 *
 *  Created on: 20 oct. 2017
 *      Author: fabia
 */

#include "Main.h"
#include "ListaEnlazada.h"
#include "ListaEnlazada.cpp"
#include "Sorteo.h"
#include "Nodo.h"


using namespace std;
/*#include "ListaCircular.h"
#include "ListaCircular.cpp"*/

//Funcion Reemplazar de Problema No 2

template<typename T>
Pila<T> reemplazar(Pila<T> uso,int nuevo,int viejo){		//Problema No 2

Pila<T> aux;

	while(uso.tamanio>0){
	T valor =uso.pop();

	if(viejo!=valor){
		aux.push(valor);

	}else{
		aux.push(nuevo);
	}

}
uso=aux;
return uso;
}


//Devuelve una lista de enteros ordenada utilizada para la funcion de mezclar en el problema 3
ListaEnlazada<int> Ordenar(ListaEnlazada<int> lista1){
ListaEnlazada<int> contador = lista1;
ListaEnlazada<int> aux;
int numeros[lista1.cantidad];
for(int i=0;i<contador.cantidad;i++){
numeros[i] = lista1.eliminar_primero();
}

int temp;
	for(int z = 1; z < contador.cantidad; ++z) {
	      for(int v = 0; v < (contador.cantidad - z); ++v) {

	         if(numeros[v] > numeros[v + 1]) {
	            temp = numeros[v];
	            numeros[v] = numeros[v + 1];
	            numeros[v + 1] = temp;


	         }
	      }
	    }
for(int x=0;x<contador.cantidad;x++){
	aux.insertar_ultimo(numeros[x]);
}


return aux;

}

//Funcion para el problema No. 3
ListaEnlazada<int> mezclar(ListaEnlazada<int> lista1,ListaEnlazada<int> lista2){
	ListaEnlazada<int> aux1 = Ordenar(lista1);
	ListaEnlazada<int> aux2 =Ordenar(lista2);
	ListaEnlazada<int> temp;


	for(int i=0;i<lista1.cantidad;i++){
	int t = aux1.eliminar_primero();
	temp.insertar_ultimo(t);

	}

		for(int i=0;i<lista2.cantidad;i++){
		int t = aux2.eliminar_primero();
		temp.insertar_ultimo(t);
	}

		ListaEnlazada<int> mezclada = Ordenar(temp);

	return mezclada;
}




int main(){

	//Problema No 1

	//Implementacion Lista Enlazada

	/*ListaEnlazada<int> prueba;
	prueba.insertar_ultimo(1000);
	prueba.insertar_inicio(1);
	prueba.insertar_inicio(15);
	prueba.insertar_inicio(20);
	prueba.insertar_ultimo(100);
	prueba.imprimir();
	cout<<prueba.eliminar_primero()<<endl;
	prueba.imprimir();*/

	//Implementacion Lista Circular

	/*ListaCircular<int> circulo;

	circulo.insertar_inicio(15);
	circulo.insertar_inicio(100);
	circulo.insertar_inicio(200);
	circulo.insertar_ultimo(250);
	circulo.insertar_inicio(500);
	circulo.imprimir();
	cout<<circulo.eliminar_primero()<<endl;
	circulo.imprimir();*/

	//Implementacion de Pila

	/*Pila<int> temp;
	temp.push(15);
	temp.push(25);
	temp.imprimir();
	temp.pop();
	temp.imprimir();*/

	//Implementacion de Cola
	/*Cola<int> prueba2;
	prueba2.encolar(15);
	prueba2.encolar(100);
	prueba2.imprimir();
	prueba2.desencolar();
	prueba2.imprimir();*/


	//Llamada a Funcion de Problema 2
	//reemplazar(temp,45,25).imprimir();


	//Siguientes lineas para usar la funcion reemplazar del problema 3
/*	ListaEnlazada<int> ordenar2;
	ordenar2.insertar_inicio(33);
	ordenar2.insertar_ultimo(1);
	ordenar2.insertar_ultimo(27);
	ordenar2.imprimir();

	ListaEnlazada<int> ordenar1;
	ordenar1.insertar_inicio(44);
	ordenar1.insertar_ultimo(60);
	ordenar1.insertar_ultimo(6);
	ordenar1.imprimir();
	mezclar(ordenar2,ordenar1).imprimir();*/


	//Problema NO 5  sorte uno por uno y todos
/*	Sorteo sor1;
	cout<<"Sortear uno por uno"<<endl;
	sor1.sortearuno();			//funcion sortear uno
	cout<<" "<<endl;
	cout<<"Sortear todos"<<endl;
	sor1.sorteartodos();		//funcion de sortear todos de uno*/

};
