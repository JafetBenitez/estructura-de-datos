#include "Arbol.h"
#include "string"
#include "iostream"

using namespace std;

Arbol::Arbol(Pariente* p)
{
    _raiz = p;
}

Arbol::~Arbol()
{
    //dtor
}

Pariente* Arbol::getRaiz(){
    return _raiz;
}

void Arbol::setRaiz(Pariente* p)
{
    _raiz = p;
}

void Arbol::recorrer(Pariente* p)
{
cout<<p->getNombre()<<endl;
 if(p->getHijos() >0)
 {
     Pariente* i = new Pariente("p");
     while(i != NULL)
     {
         recorrer(i);
        i = i->getSiguiente();
     }
 }
}
