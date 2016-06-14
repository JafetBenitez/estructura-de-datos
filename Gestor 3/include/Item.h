#ifndef ITEM_H
#define ITEM_H
#include "string"

using namespace std;
class Item
{
    public:
        Item();
        virtual ~Item();
         string getNombre()
                {
                    return nombre;
                };

         void setNombre(string n){
                    nombre = n;
                };

         int getCantidad(){
                    return cantidad;
                };

         void setCantidad(int a){
                    cantidad = a;
                };

         Item* getSiguiente(){
                    return siguiente;
                };

         void setSiguiente(Item* itm){
                    siguiente = itm;
                };
    protected:
    private:
        string nombre;
        int cantidad;
        Item* siguiente;
};

#endif // ITEM_H
