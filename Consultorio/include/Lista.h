#ifndef LISTA_H
#define LISTA_H
#include "Paciente.h"
#include "iostream"
#include "cstdlib"

class Lista
{
    public:
        Lista();
        virtual ~Lista();

        void Listar();
        void agregar(Paciente* p);

       Paciente* getInicio(){
            return inicio;
        }

        void setInicio(Paciente* i){
            inicio = i;
        }

        Paciente* getFin(){
            return fin;
        }

        void setFin(Paciente* f){
            fin = f;
        }
    protected:
    private:
        Paciente* inicio;
        Paciente* fin;
};

#endif // LISTA_H
