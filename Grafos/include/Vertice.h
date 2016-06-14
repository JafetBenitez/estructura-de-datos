#ifndef VERTICE_H
#define VERTICE_H
#include "string"

using namespace std;


class Vertice
{
    public:
        Vertice(string nombre);
        virtual ~Vertice();
        void agregar(Vertice* vertice);
    private:
        string _nombre;
        Vertice* _primer;
        Vertice* _ultimo;
        Vertice* _siguiente;
        int _distancia;
        Vertice* _ruta;
        friend class Cola;
        friend class Grafo;
};

#endif // VERTICE_H
