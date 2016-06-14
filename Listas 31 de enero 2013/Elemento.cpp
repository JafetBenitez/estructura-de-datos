#include "Elemento.h"

string Elemento::getNombre()
{
       return nombre;
}

void Elemento::setNombre(string nombre)
{
     this -> nombre = nombre;
}

Elemento* Elemento::getSiguiente()
{
          return siguiente;
}

void Elemento::setSiguiente(Elemento* elemento)
{
     this -> siguiente = elemento;
}


Elemento::Elemento(string nombre)
{
      this -> nombre = nombre;
      siguiente = NULL;
}
