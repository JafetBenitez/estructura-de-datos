#ifndef COLA_H
#define COLA_H
#include "Vertice.h"

class Cola
{
    public:
        Cola();
        virtual ~Cola();
        void agregar(Vertice* vertice);
        Vertice* extraer();
        bool estaVacio();
    private:
        Vertice* _primer;
        Vertice* _ultimo;
        int _tamano;
};

#endif // COLA_H
