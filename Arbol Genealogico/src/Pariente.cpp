#include "Pariente.h"
#include "string.h"

using namespace std;
Pariente::Pariente(string n)
{
    _nombre = n;
    _nHijos = 0;
    _primerHijo = NULL;
    _ultimo=NULL;
    _siguiente=NULL;
}

Pariente::~Pariente()
{
    //dtor
}

void Pariente::agregarHijos(Pariente* p)
{
    _nHijos++;
        if(_primerHijo == NULL){
            _primerHijo = p;
            _ultimo = p;
        }
        else{
            _ultimo->setSiguiente(p);
            _ultimo = p;
        }
}
