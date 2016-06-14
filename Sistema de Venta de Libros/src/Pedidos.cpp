#include "Pedidos.h"
#include "string"
#include "iostream"

using namespace std;

Pedidos::Pedidos()
{
    _ultima = NULL;
}
Pedidos::Pedidos(Orden* o)
{
    _ultima = o;
}

Pedidos::~Pedidos()
{
    //dtor
}


void Pedidos::agregarOrden(Orden* o)
{
    if(_ultima == NULL)
    {
        _ultima = o;
    }
    else
    {
        o->setANterior(_ultima);
        _ultima = o;
    }
}
void Pedidos::desplegarOrdenes(Inventario* i)
{
    if(_ultima != NULL)
    {
        Libro* cursor = i->getUltimo();

        while(cursor!=NULL)
        {
            Orden* ord = new Orden();
            ord = this->_ultima;

            while(ord != NULL)
            {
                if(cursor->getTitulo() == ord->getLibro()->getTitulo())
                {

                cout<<"Se ha despachado el libro "
                <<ord->getLibro()->getTitulo()<<" de "
                <<ord->getLibro()->getAutor()<<", copia #"
                <<ord->getLibro()->getCantidad()<<" al Cliente "
                <<ord->getCliente()->getNombre()<<" "
                <<ord->getCliente()->getApellido()
                <<" a la "<<ord->getCliente()->getDireccion()<<endl;
                ord->getLibro()->setCantidad(ord->getLibro()->getCantidad() - 1);
                }


                ord = ord->getAnterior();
        }

            cursor= cursor->getAnterior();
        }


    }
}
