#include "Grafo.h"
#include <iostream>

using namespace std;

Grafo::Grafo()
{
    _cola = new Cola();
}

void Grafo::recorrer(Vertice* inicio)
{
    _cola -> agregar(inicio);
    inicio -> _distancia = 0;
    Vertice* i = inicio;
    Vertice* adyacencia;
    while(!_cola -> estaVacio())
    {
        i = _cola -> extraer();
        adyacencia = i -> _primer;
        while(adyacencia)
        {
            if(adyacencia -> _distancia == -1)
            {
                adyacencia-> _distancia = i -> _distancia + 1;
                cout << "Distancia hasta " << adyacencia -> _nombre  << " es " << adyacencia-> _distancia << endl;
                _cola -> agregar(adyacencia);
            }
            adyacencia = adyacencia -> _siguiente;
        }
    }
}


Grafo::~Grafo()
{
    //dtor
}
