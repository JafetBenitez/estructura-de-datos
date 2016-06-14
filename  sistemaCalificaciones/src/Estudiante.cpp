#include "Estudiante.h"
using namespace std;


Estudiante::Estudiante(string apellido, string nombre, int literatura, int matematica, int naturales, int historia)
{
    _apellido = apellido;
    _nombre = nombre;
    _literatura = literatura;
    _matematica = matematica;
    _naturales = naturales;
    _historia = historia;
    _siguiente = NULL;
    _anterior = NULL;
    _promedio = this->Promedio();

}

double Estudiante::Promedio()
{
    return  (_literatura + _matematica + _naturales + _historia)/ 4;

}


Estudiante::~Estudiante()
{
    //dtor
}

std::string Estudiante::getNombre()
{
    return _nombre;
}

std::string Estudiante::getApellido()
{
    return _apellido;
}

int Estudiante::getLiteratura()
{
    return _literatura;
}
int Estudiante::getNaturales()
{
   return _naturales;
}

int Estudiante::getMatematica()
{
    return _matematica;
}

int Estudiante::getHistoria()
{
    return _historia;
}

void Estudiante::setLiteratura(int l)
{
    _literatura = l;
}

void Estudiante::setNaturales(int n)
{
    _naturales = n;
}

void Estudiante::setMatematica(int m)
{
     _matematica = m;
}

void Estudiante::setHistoria(int h)
{
    _historia = h;
}
