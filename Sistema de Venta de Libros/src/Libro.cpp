#include "Libro.h"

Libro::Libro(std::string titulo, std::string autor, std::string isbn, int cantidad)
{
    _titulo = titulo;
    _autor = autor;
    _isbn  =  isbn;
    _cantidad = cantidad;
    _anterior = NULL;
}

Libro::Libro()
{
    _titulo = "";
    _autor = "";
    _isbn  =  "";
    _cantidad = NULL;
    _anterior = NULL;
}

Libro::~Libro()
{
    //dtor
}

Libro* Libro::getAnterior()
{
    return _anterior;
}

std::string Libro::getTitulo()
{
    return _titulo;
}

std::string Libro::getAutor()
{
    return _autor;
}

std::string Libro::getISBN()
{
    return _isbn;
}

int Libro::getCantidad()
{
    return _cantidad;
}

bool Libro::getEstado()
{
    return _estado;
}

void Libro::setEstado(bool e)
{
    _estado = e;
}

void Libro::setCantidad(int c)
{
    _cantidad = c;
}

void Libro::setTitulo(std::string t)
{
    _titulo = t;
}

void Libro::setAutor(std::string a)
{
    _autor = a;
}

void Libro::setISBN(std::string i)
{
    _isbn = i;
}

void Libro::setAnterior(Libro* s)
{
    _anterior = s;
}
