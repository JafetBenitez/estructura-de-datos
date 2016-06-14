#include <iostream>
#include "Grafo.h"

using namespace std;

int main()
{
    Grafo* grafo = new Grafo();
    Vertice* a  = new Vertice("A");
    Vertice* b  = new Vertice("B");
    Vertice* c  = new Vertice("C");
    Vertice* d  = new Vertice("D");

    a -> agregar(b);
    a -> agregar(c);
    c -> agregar(d);
    grafo -> recorrer(a);
    return 0;
}
