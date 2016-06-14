#ifndef GRAFO_H
#define GRAFO_H
#include "Cola.h"

class Grafo
{
    public:
        Grafo();
        virtual ~Grafo();
        void recorrer(Vertice* inicio);
    private:
        Cola* _cola;

};

#endif // GRAFO_H
