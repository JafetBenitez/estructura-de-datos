#include "Cliente.h"

Cliente::Cliente(std::string nombre, std::string apellido, std::string direccion)
{
    _nombre = nombre;
    _apellido = apellido;
    _direccion = direccion;
    _siguiente = NULL;
}

Cliente::Cliente()
{
    _nombre = "";
    _apellido = "";
    _direccion = "";
    _siguiente = NULL;
}

Cliente::~Cliente()
{
    //dtor
}
std::string Cliente::getNombre()
{
    return _nombre;
}

std::string Cliente::getApellido()
{
    return _apellido;
}

Cliente* Cliente::getSiguiente()
{
 return _siguiente;
}

void Cliente::setSiguiente(Cliente* c)
{
    _siguiente = c;
}


std::string Cliente::getDireccion()
{
        return _direccion;
}

void Cliente::setNombre(std::string n)
{
    _nombre = n;
}

void Cliente::setApellido(std::string n)
{
    _apellido = n;
}

void Cliente::setDireccion(std::string d)
{
    _direccion = d;
}
