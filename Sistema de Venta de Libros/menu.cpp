#include <iostream>
#include "stdlib.h"
#include "Agenda.h"
#include "string"
#include "Pedidos.h"


using namespace std;

void menu()
{
    int opcion, cantidad, numero, otroNumero;
    bool loop = true;
    string nombre, apellido, direccion;
    string titulo, autor, isbn;

    Cliente* c = new Cliente();
    Libro* l = new Libro();
    Orden* o = new Orden();

    Agenda* agendaX = new Agenda();
    Inventario* inventarioX = new Inventario();
    Pedidos* p = new Pedidos();


    while(loop){
        system("cls");
        cout<<"Libreria X"<<endl;
        cout<<"1- Crear Cliente"<<endl;
        cout<<"2- Ingresar libro al inventario"<<endl;
        cout<<"3- Crear orden"<<endl;
        cout<<"4- Despachar órdenes"<<endl;
        cout<<"5- Salir"<<endl;
        cin>>opcion;

        switch(opcion)
        {
        case 1:
            system("cls");
            cout<<"Crear Cliente"<<endl;
            cout<<"Introduzca el nombre del cliente: "<<endl;
            cin>>nombre;
            cout<<"Introduzca el apellido del cliente: "<<endl;
            cin>>apellido;
            cout<<"Introduzca la direccion del cliente: "<<endl;
            cin>>direccion;
            c = new Cliente(nombre, apellido, direccion);

            agendaX->agregar(c);
            agendaX->listarClientes();
            system("pause");
            break;
        case 2:
            system("cls");
            cout<<"Ingresar libro al inventario"<<endl;

            cout<<"Introduzca el titulo del libro: "<<endl;
            cin>>titulo;
            cout<<"Introduzca el autor del libro: "<<endl;
            cin>>autor;
            cout<<"Introduzca el ISBN del libro: "<<endl;
            cin>>isbn;
            cout<<"Introduzca la cantidad de libros en existencia: "<<endl;
            cin>>cantidad;
            l = new Libro(titulo, autor, isbn, cantidad);
            inventarioX->agregarLibro(l);
            inventarioX->desplegarInventario();
            system("pause");
            break;
        case 3:
            system("cls");
            cout<<"Crear orden"<<endl;
            inventarioX->desplegarInventario();
            cout<<"Introduzca el numero del libro a ordenar"<<endl;
            cin>>numero;
            system("cls");
            agendaX->listarClientes();
            cout<<"Introduzca el numero del cliente"<<endl;
            cin>>otroNumero;
            o = new Orden(agendaX->getCliente(otroNumero),inventarioX->getLibro(numero));
            p->agregarOrden(o);
            break;
        case 4:
            system("cls");
            cout<<"Despachar órdenes"<<endl;
            p->desplegarOrdenes(inventarioX);
            system("pause");

            break;
        case 5:
            system("cls");
            cout<<"Salir"<<endl;
            cout<<"Jafet Gabriel Benítez Hidalgo [2013-1651]"<<endl;
            loop = false;
            break;
        }
    }
}
