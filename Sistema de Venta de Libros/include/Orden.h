#ifndef ORDEN_H
#define ORDEN_H
#include "Cliente.h"
#include "Libro.h"


class Orden
{
    public:
        Orden();
        Orden(Cliente* cliente, Libro* libro);
        virtual ~Orden();

        Cliente* getCliente();
        Libro* getLibro();
        Orden* getAnterior();

        void setCliente(Cliente* c);
        void setLibro(Libro* l);
        void setANterior(Orden* a);
    protected:
    private:
        Cliente* _cliente;
        Libro* _libro;
        Orden* _anterior;
};

#endif // ORDEN_H
