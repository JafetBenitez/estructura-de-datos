#ifndef AGENDA_H
#define AGENDA_H
#include "Cliente.h"


class Agenda
{
    public:
        Agenda(Cliente* c);
        Agenda();
        virtual ~Agenda();
        void listarClientes();
        Cliente* getCliente(int opcion);
        void agregar(Cliente * c);
    protected:
    private:
        Cliente* _primero;
        Cliente* _ultimo;
};

#endif // AGENDA_H
