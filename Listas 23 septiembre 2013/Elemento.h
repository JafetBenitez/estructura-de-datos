/*
 * Elemento.h
 *
 *  Created on: Sep 23, 2013
 *      Author: Raydelto
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_
#include <string>
using namespace std;
class Elemento {
public:
	Elemento(string nombre);
	virtual ~Elemento();

	string getNombre() {
		return nombre;
	}

	void setNombre( string nombre) {
		this->nombre = nombre;
	}

	Elemento* getSiguiente() {
		return siguiente;
	}

	void setSiguiente(Elemento* siguiente) {
		this->siguiente = siguiente;
	}

private:
	string nombre;
	Elemento* siguiente;

};

#endif /* ELEMENTO_H_ */
