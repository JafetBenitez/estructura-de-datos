/*
 * Elemento.cpp
 *
 *  Created on: Sep 23, 2013
 *      Author: Raydelto
 */

#include "Elemento.h"

Elemento::Elemento(string nombre) {
	siguiente = NULL;
	this->nombre = nombre;
}

Elemento::~Elemento() {
	// TODO Auto-generated destructor stub
}

