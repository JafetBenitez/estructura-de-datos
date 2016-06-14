#include "Orden.h"

Orden::Orden()
{
    _cliente = NULL;
    _libro = NULL;
    _anterior = NULL;
}

Orden::Orden(Cliente* cliente, Libro* libro)
{
    _cliente = cliente;
    _libro = libro;
    _anterior = NULL;
   // _libro->setCantidad(_libro->getCantidad()-1);
}

Orden::~Orden()
{
    //dtor
}
Cliente* Orden::getCliente()
{
    return _cliente;
}

Libro* Orden::getLibro()
{
    return _libro;
}

Orden* Orden::getAnterior()
{
    return _anterior;
}

void Orden::setCliente(Cliente* c)
{
    _cliente = c;
}

void Orden::setLibro(Libro* l)
{
    _libro = l;
}

void Orden::setANterior(Orden* o)
{
    _anterior = o;
}
