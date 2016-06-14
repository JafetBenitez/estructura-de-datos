#ifndef ARBOL_H
#define ARBOL_H
#include "Pariente.h"


class Arbol
{
    public:
        Pariente* getRaiz();
        void setRaiz(Pariente* p);
        void recorrer(Pariente* p);
        Arbol(Pariente* p);
        virtual ~Arbol();
    protected:
    private:
        Pariente* _raiz;

};

#endif // ARBOL_H
