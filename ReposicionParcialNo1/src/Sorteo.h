/*
 * Sorteo.h
 *
 *  Created on: 22 oct. 2017
 *      Author: fabia
 */

#ifndef SORTEO_H_
#define SORTEO_H_
#include "ListaEnlazada.h"

//Clase para el problema NO 5

class Sorteo {
public:
	Sorteo();
	virtual ~Sorteo();
			ListaEnlazada<string> participantes;
			Cola<string> premios;
			ListaEnlazada<string> premiados;
	void sortearuno(){

		participantes.insertar_inicio("Erick");
		participantes.insertar_ultimo("Fabian");
		participantes.insertar_ultimo("Alejandro");
		participantes.insertar_ultimo("Geovanny");
		int contar=participantes.cantidad;
		premios.encolar("TV");
		premios.encolar("DVD");
		premios.encolar("Pelota");
		premios.encolar("Boletos");

		cout<<"Los candidatos son"<<endl;
		participantes.imprimir();
		cout<<"Los premios son"<<endl;
		premios.imprimir();

		string ganadores[contar];


			for(int i=0; i<contar; i++) {
			ganadores[i]=participantes.eliminar_primero();
		}

			int random = rand()%contar;


			premiados.insertar_ultimo(ganadores[random]);

			cout<<"el ganador es "+premiados.eliminar_primero()+" y se lleva "+premios.desencolar()+" felicidades"<<endl;


	}

	void sorteartodos(){
			participantes.insertar_inicio("Erick");
			participantes.insertar_ultimo("Fabian");
			participantes.insertar_ultimo("Alejandro");
			participantes.insertar_ultimo("Geovanny");
			int contar=participantes.cantidad;
			premios.encolar("TV");
		/*	premios.encolar("DVD");
			premios.encolar("Pelota");
			premios.encolar("Boletos");*/

			string ganadores[contar];
			cout<<"Los candidatos son"<<endl;
				participantes.imprimir();
				cout<<"Los premios son"<<endl;
				premios.imprimir();

				for(int i=0; i<contar; i++) {
				ganadores[i]=participantes.eliminar_primero();
			}



				for(int x=0;x<contar;x++){
					int random = rand()%contar;
									premiados.insertar_ultimo(ganadores[random]);

									cout<<"el ganador es "+premiados.eliminar_primero()+" y se lleva "+premios.desencolar()+" felicidades"<<endl;

				}
	}

};

#endif /* SORTEO_H_ */
