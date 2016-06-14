#include <iostream>

using namespace std;
#include "Item.h";

  string Item::getNombre()
  {
    return nombre;
  };

    int Item getCantidad(){
        return cantidad;
    };

    void Item::setNombre(string n){
        this->nombre = n;
    };

    void Item::setCantidad(int c){
        this->cantidad = c;
    };

   Item(string n, int c){
       nombre = n;
       cantidad = c;

    }


