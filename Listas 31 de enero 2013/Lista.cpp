#include "Lista.h"
void Lista::agregar(Elemento* elemento)
{
      if(inicio == NULL){
                inicio = elemento;          
                fin = elemento;
      }else{
            fin -> setSiguiente(elemento);                 
            fin = elemento;
      }
}

Elemento* Lista::getInicio()
{
          return  inicio;
}

void Lista::setInicio(Elemento* inicio)
{
     this -> inicio = inicio;
}

Elemento* Lista::getFin()
{
     return fin;
}

void Lista::setFin(Elemento* fin)
{
     this -> fin = fin;
}
