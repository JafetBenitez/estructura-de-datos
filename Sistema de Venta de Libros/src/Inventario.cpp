#include "Inventario.h"
#include "string"
#include <iostream>

using namespace std;

Inventario::Inventario(Libro* l)
{
    _ultimo = l;
}

Inventario::Inventario()
{
    _ultimo = NULL;
}

Inventario::~Inventario()
{
    //dtor
}
void Inventario::desplegarInventario()
{
    if(_ultimo!=NULL)
    {
        Libro * i = new Libro();
    i = _ultimo;
    int n = 1;
    while(i!=NULL)
    {
        cout<<n<<"-"<<
        i->getTitulo()<<", "
        <<i->getAutor()<<"( ISBN: "
        <<i->getISBN()
        <<", Cantidad: "
        <<i->getCantidad()<<" )"<<endl;
        i= i->getAnterior();
        n++;
    }
    }

    else{
        cout<<"No hay libros"<<endl;
    }

}

Libro* Inventario::getLibro(int opcion)
{
    if(_ultimo!=NULL)
    {
        Libro * i = new Libro();
        i = _ultimo;
        int n = 1;
        while(i!=NULL)
        {
            if(n == opcion)
            {
                return i;
            }
            i= i->getAnterior();
            n++;
        }

    return 0;
    }

    else{
        cout<<"No hay libros"<<endl;
    }
}

void Inventario::agregarLibro(Libro* c)
{
    if(_ultimo == NULL){
        _ultimo = c;
    }
    else{
        c->setAnterior(_ultimo);
        _ultimo = c;

    }
}

Libro* Inventario::getUltimo()
{
    return _ultimo;
}
