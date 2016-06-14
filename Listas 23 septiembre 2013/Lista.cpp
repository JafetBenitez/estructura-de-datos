/*
 * Lista.cpp
 *
 *  Created on: Sep 23, 2013
 *      Author: Raydelto
 */

#include "Lista.h"

Lista::Lista() {
	primerElemento = NULL;
	ultimoElemento = NULL;

}

Lista::~Lista() {
}

void Lista::agregar(Elemento* elemento) {
	if(primerElemento == NULL){
		primerElemento = elemento;
		ultimoElemento = elemento;
	}else{
		ultimoElemento -> setSiguiente(elemento);
		ultimoElemento = elemento;
		ultimoElemento->setSiguiente(primerElemento);
	}
}
