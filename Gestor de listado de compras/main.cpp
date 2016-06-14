#include <iostream>
#include <stdlib.h>
#include "Item.h";
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
         Item* cosa;
         string nom = "juan";
         int val = 0;
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

case 1:{
    cout << "Listar" << endl;
    break;
    }
case 2:{
    cout << "Introducir" << endl;
    cosa= new Item(nom, val);
   // cout << cosa->getNombre() << endl;
    break;
    }
case 3:
    {


    cout << "Eliminar" << endl;
    break;
    }
case 4:
    {


    cout << "Salir" << endl;
    return 0;
    break;
    }
default:
    system("cls");
    cout << "Opcion incorrecta" << endl;


    }



    }




}
