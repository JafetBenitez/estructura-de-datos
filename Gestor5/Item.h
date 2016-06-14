#ifndef ITEM_H
#define ITEM_H
#include "string"

using namespace std;
class Item
{
    public:
        Item();
        Item(string nombre, int cantidad);
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
        Item* getAnterior(){
                    return anterior;
                };

         void setAnterior(Item* itm){
                    anterior = itm;
                };


    protected:
    private:
        string nombre;

        int cantidad;
        Item* siguiente;
        Item* anterior;


};

#endif // ITEM_H
