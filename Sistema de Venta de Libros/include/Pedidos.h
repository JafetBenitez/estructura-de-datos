#ifndef PEDIDOS_H
#define PEDIDOS_H
#include "Orden.h"
#include "Inventario.h"


class Pedidos
{
    public:
        Pedidos(Orden* o);
        Pedidos();
        virtual ~Pedidos();
        void desplegarOrdenes(Inventario* i);
        void agregarOrden(Orden* o);
    protected:
    private:
        Orden* _ultima;
};

#endif // PEDIDOS_H
