#include "Paciente.h"

Paciente::Paciente()
{
    //ctor
}

Paciente::~Paciente()
{
    //dtor
}

Paciente::Paciente(string n, string a, string t){
    nombre = n;
    apellido = a;
    telefono = t;
    siguiente = NULL;
}
