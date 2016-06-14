#ifndef LISTA_H
#define LISTA_H
#include "Item.h"

class Lista
{
    private:
         Item* inicio;
         Item* fin;

    public:
        Lista();
        virtual ~Lista();
        void agregar(Item* item);
        Item* getInicio();
        void setInicio(Item* item);
        Item* getFin();
        void setFin(Item* item);
    protected:

};

#endif // LISTA_H
