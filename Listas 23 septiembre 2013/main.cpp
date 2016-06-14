/*
 * main.cpp
 *
 *  Created on: Sep 23, 2013
 *      Author: Raydelto
 */


#include "Lista.h"
#include <iostream>
using namespace std;
int main(int argc, char **argv) {
	Lista* lista = new Lista();
	Elemento* cancion1  = new Elemento("Baby Cohete");
	Elemento* cancion2  = new Elemento("2 Caras , 2 Corazones");
	Elemento* cancion3  = new Elemento("Asunto Sexual");
	Elemento* cancion4  = new Elemento("La veterana");
	Elemento* cancion5  = new Elemento("Sanitarios");
	Elemento* cancion6  = new Elemento("El Flaco");
	lista->agregar(cancion1);
	lista->agregar(cancion2);
	lista->agregar(cancion3);
	lista->agregar(cancion4);
	lista->agregar(cancion5);
	lista->agregar(cancion6);

	Elemento* i = lista-> getPrimerElemento();
	while(i != NULL){
		cout << i -> getNombre() << endl;
		i = i-> getSiguiente();
	}

}
