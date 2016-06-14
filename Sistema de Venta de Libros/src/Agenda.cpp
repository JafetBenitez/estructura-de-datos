#include "Agenda.h"
#include <iostream>
#include "string"

using namespace std;

Agenda::Agenda(Cliente* c)
{
    _primero = c;
    _ultimo = c;
}

Agenda::Agenda()
{
    _primero = NULL;
    _ultimo = NULL;
}

void Agenda::listarClientes()
{
    Cliente * i = new Cliente();
    i= _primero;
    int n =1;
    while(i != NULL)
    {
        cout<<n<<"-"<<i->getNombre()<<" "<<i->getApellido()<<endl;
        i = i->getSiguiente();
        n++;
    }

}


Agenda::~Agenda()
{
    //dtor
}

void Agenda::agregar(Cliente* c)
{
     if(_primero == NULL){
        _primero=c;
        _ultimo = c;
    }
    else{
        _ultimo->setSiguiente(c);
        _ultimo = c;
       _ultimo->setSiguiente(NULL);

    }
}

Cliente* Agenda::getCliente(int opcion)
{
    Cliente * i = new Cliente();
    i= _primero;
    int n =1;
    while(i != NULL)
    {
        if(n == opcion)
        {
            return i;
        }
        i = i->getSiguiente();
        n++;
    }
    return 0;
}
