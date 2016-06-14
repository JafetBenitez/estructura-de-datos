#include "Lista.h"

Lista::Lista()
{
    inicio = NULL;
    fin = NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(Paciente* p){
    if(inicio == NULL){
        inicio = p;
        fin = p;
    }
    else{
        p->setSiguiente(inicio);
        inicio = p;

    }
}

void Lista::Listar(){
    Paciente* cursor = inicio;
    while(cursor->getSiguiente()!= NULL){
        cout <<"\n"<< cursor->getNombre()<<" "<<cursor->getApellido()<<" -> "<<cursor->getTelefono() <<endl;
        cursor = cursor->getSiguiente();
    }
     cout <<"\n"<<fin->getNombre()<<" "<<fin->getApellido()<<" -> "<<fin->getTelefono() <<endl;

}
