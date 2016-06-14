#include "Lista.h"
#include "string"
#include "stdlib.h"

using namespace std;
int main(){
    int selector = 0;
    string nombre;
    string apellido;
    string telefono;
    Lista* listaConsultorio = new Lista();
    bool salir = true;
    Paciente* p;

    while(salir){
        system("cls");
        cout<<"1-Agragar paciente"<<endl;
        cout<<"2-Listar pacientes"<<endl;
        cout<<"3-Salir"<<endl;
        cout<<"Seleccione una opcion"<<endl;
        cin>>selector;
        switch(selector){
        case 1:
            system("cls");
            cout<<"Agragar paciente"<<endl;
            cout<<"Nombre: "<<endl;
            cin>>nombre;
             cout<<"Apellido: "<<endl;
            cin>>apellido;
             cout<<"Telefono: "<<endl;
            cin>>telefono;

            p = new Paciente(nombre, apellido, telefono);
            listaConsultorio->agregar(p);


            break;
        case 2:
            system("cls");
            cout<<"Listar pacientes"<<endl;
            listaConsultorio->Listar();
            break;
        case 3:
            system("cls");
            cout<<"Jafet Gabriel Benitez Hidalgo [2013-1651]"<<endl;
            cout<<"Todos los derechos reservados 2015"<<endl;
            system("pause");
             salir = false;
            break;
        }
    }
    return 0;
}
