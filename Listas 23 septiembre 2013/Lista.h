/*
 * Lista.h
 *
 *  Created on: Sep 23, 2013
 *      Author: Raydelto
 */

#ifndef LISTA_H_
#define LISTA_H_
#include <stdlib.h>
#include "Elemento.h"
class Lista {
public:
	Lista();
	virtual ~Lista();
	void agregar(Elemento* elemento);

	Elemento* getPrimerElemento()  {
		return primerElemento;
	}

	void setPrimerElemento( Elemento* primerElemento) {
		this->primerElemento = primerElemento;
	}

	Elemento* getUltimoElemento()  {
		return ultimoElemento;
	}

	void setUltimoElemento(Elemento* ultimoElemento) {
		this->ultimoElemento = ultimoElemento;
	}

private:
	Elemento* primerElemento;
	Elemento* ultimoElemento;
};

#endif /* LISTA_H_ */
