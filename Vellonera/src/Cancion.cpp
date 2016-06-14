#include "Cancion.h"

Cancion::Cancion(int id,string titulo, string articulo, string duracion)
{
    this->id = id;
    this->nombre = titulo;
    this->artista = articulo;
    this-> duracion = duracion;
}

string Cancion::getNombre()
{
    return nombre;
}

void Cancion::setNombre(string nom)
{
    this->nombre = nom;
}

string Cancion::getArtista()
{
    return artista;
}

void Cancion::setArtista(string art)
{
    this->artista = art;
}

string Cancion::getDuracion()
{
    return duracion;
}

void Cancion::setDuracion(string duracion)
{
    this->duracion = duracion;
}

int Cancion::getId()
{
    return id;
}

void Cancion::setId(int id)
{
    this->id = id;
}

Cancion* Cancion::getSiguiente()
{
    return siguiente;
}

void Cancion::setSiguiente(Cancion* c)
{
    this->siguiente =c;
}

Cancion* Cancion::getAnterior()
{
    return anterior;
}

void Cancion::setAnterior(Cancion* c)
{
    this->anterior = c;
}


Cancion::~Cancion()
{

}
