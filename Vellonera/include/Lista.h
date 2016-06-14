#ifndef LISTA_H
#define LISTA_H
#include "Cancion.h"
#include "stdio.h"
#include <iostream>



class Lista
{
    public:
        Lista();
        virtual ~Lista();
        void agregar(Cancion* e);
        void eliminar( int p);
        void lista();
        Cancion* getUltimo();
        void setUltimo(Cancion* c);
        Cancion* getPrimero();
        void setPrimero(Cancion* c);
        Cancion* getActual();
        void setActual(Cancion* c);
        bool getRepetir();
        void setRepetir(bool r);
        Cancion* extraer();
        Cancion* i;



    private:
        Cancion* primero;
        Cancion* ultimo;
        Cancion* actual;
        bool repetir;
};

#endif // LISTA_H
