#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED


#include <string>
#include <iostream>

using namespace std;
class Item
{
      private:
              string nombre;
              int cantidad;
              Item* siguiente;
      public:
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

                int setCantidad(int a){
                    cantidad = a;
                };

                Item* getSiguiente(){
                    return siguiente;
                };

                void setSiguiente(Item* itm){
                    siguiente = itm;
                };



};



#endif // ITEM_H_INCLUDED
