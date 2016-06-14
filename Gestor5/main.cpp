#include <iostream>
#include <stdlib.h>
#include "Lista.h"
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    Lista* compras = new Lista();
    Item* itm1 = new Item();
    string itmNombre = "J";
    string itmBorrar = "";
    int itmCantidad = 6;
    Item* i;
    //     Item* cosa;
      //   string nom = "juan";
        // int val = 0;
    while(1==1)
        {
    int menu=0;
    cout << "Gestor de listas" << endl;
    cout << "Escoja una de las siguientes opciones:" << endl;
    cout << "1- Listar Artículos" << endl;
    cout << "2- Introducir artículo" << endl;
    cout << "3- Eliminar artículo" << endl;
    cout << "4- Salir" << endl;
    cin>>menu;
    cout << menu<< endl;


    switch(menu)
    {

case 1:
    cout << "Listar" << endl;

    i = compras -> getInicio();
    while(i != NULL){
            cout << i -> getNombre() << endl;
            cout << i -> getCantidad() << endl;
            i = i -> getSiguiente();

    }
    break;

case 2:
    cout << "Introducir" << endl;

    cout<<"Introduzca item: "<<endl;
    cin>>itmNombre;
    cout<<"Introduzca la cantidad del mismo: "<<endl;
    cin>> itmCantidad;
    itm1->setNombre(itmNombre);
    itm1->setCantidad(itmCantidad);
    compras->agregar(itm1);
    cout << "Todo cool" << endl;

    break;

case 3:
       cout << "Eliminar" << endl;

    i = compras -> getInicio();
    while(i != NULL){
            cout << i -> getNombre() << endl;
            cout << i -> getCantidad() << endl;
            i = i -> getSiguiente();
            }
    cout << "Introduzca el nombre del item a borra: " << endl;
    cin>> itmBorrar;
    while(i != NULL){
            if(i->getNombre()== itmBorrar){
                i->getAnterior()->setSiguiente(i->getSiguiente());
                free(i);
                break;
            }
            else{
                i = i->getSiguiente();
            }
        }
    break;



case 4:
    cout << "Salir" << endl;
    return 0;
    break;

default:
    system("cls");
    cout << "Opcion incorrecta" << endl;


    }



    }



    return 0;

}
