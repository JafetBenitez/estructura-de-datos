#include "Cola.h"
Cola::Cola() : _primer(NULL),_ultimo(NULL),_tamano(0)
{

}

void Cola::agregar(Vertice* vertice)
{
    _tamano++;
    if(!_primer)
    {
        _primer = _ultimo = vertice;
        return;
    }
    _ultimo -> _siguiente = vertice;
    _ultimo = vertice;

}

bool Cola::estaVacio()
{
    return !_tamano;
}


Vertice* Cola::extraer()
{
    if(!_primer)
    {
        return NULL;
    }
    _tamano--;
    Vertice* retorno = _primer;
    _primer = _primer -> _siguiente;
    return retorno;
}


Cola::~Cola()
{
    //dtor
}
