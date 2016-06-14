#include "Lista.h"

Lista::Lista()
{
    //ctor
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(Item* item){
            if(inicio == NULL){
                inicio = item;
                fin = item;
            }
            else{
                fin -> setSiguiente(item);
                fin = item;
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

