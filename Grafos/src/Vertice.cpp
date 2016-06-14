#include "Vertice.h"
#include <stdlib.h>

Vertice::Vertice(std::string nombre) : _nombre(nombre) ,_primer(NULL), _ultimo(NULL),_siguiente(NULL), _distancia(-1), _ruta(NULL)
{

}

void Vertice::agregar(Vertice* vertice)
{
    if(!_primer)
    {
        _primer = _ultimo = vertice;
        return;
    }
    _ultimo -> _siguiente = vertice;
    _ultimo = vertice;
}


Vertice::~Vertice()
{
    //dtor
}
