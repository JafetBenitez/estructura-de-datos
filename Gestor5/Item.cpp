#include "Item.h"

Item::Item()
{
    //ctor
}

Item::Item(string nombre, int cantidad)
{
    this ->nombre = nombre;
    this->cantidad = cantidad;
    siguiente = NULL;
    anterior= NULL;
}

Item::~Item()
{
    //dtor
}
