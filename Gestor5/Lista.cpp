#include "Lista.h"
#include <iostream>

Lista::Lista()
{
    inicio = NULL;
    fin = NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(Item* item){

    if(this->inicio == NULL){
         this->inicio = item;
         this->fin = item;
            }
    else{
             cout << "agregando..." << endl;
         this->fin -> setSiguiente(item);
         item->setAnterior(this->fin);
         this->fin = item;
     }
        };

        Item* Lista::getFin(){
            return this->fin;
        };

        void Lista::setFin(Item* item){
            this->inicio = fin;
        };

        Item* Lista::getInicio(){
            return inicio;
        };

        void Lista::setInicio(Item* item){
            inicio = item;
        };
