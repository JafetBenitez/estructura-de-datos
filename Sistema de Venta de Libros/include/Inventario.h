#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "Libro.h"


class Inventario
{
    public:
        Inventario(Libro* l);
        Inventario();
        virtual ~Inventario();
        void desplegarInventario();
        Libro* getLibro(int opcion);
        void agregarLibro(Libro* c);
        Libro* getUltimo();

    protected:
    private:
        Libro* _ultimo;
};

#endif // INVENTARIO_H
