#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

class Item {
    private:
        string nombre;
        int cantidad;


    public:

        string getNombre();
        int getCantidad();
        void setNombre(string n);
        void setCantidad(int c);
        Item(string n, int c);


};


#endif // ITEM_H_INCLUDED
