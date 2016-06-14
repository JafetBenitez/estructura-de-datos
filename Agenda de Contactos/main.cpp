#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(){


ofstream entrada;
ofstream temporal;
ifstream salida;
string name;
string phone;
string comparador;
bool continuar = true;
int menu = NULL;

while(continuar){
    cout<<"Agenda de contactos\n"<<endl;
    cout<<"1-Ver contactos"<<endl;
    cout<<"2-Agregar contacto"<<endl;
    cout<<"3-Modificar contacto"<<endl;
    cout<<"4-Eliminar contacto"<<endl;
    cout<<"5-salir"<<endl;
    cout<<"Seleccione una opcion:";
    cin >> menu;

    switch(menu){
        case 1:
             system("CLS");
            cout<<"Ver Contactos"<<endl;
            salida.open("Contactos.txt", ios::in); //Abrir el flujo de salida

            if(salida.fail()){
                cout<<"Houston, tenemos un problema"<<endl;
            }
            else{
                    salida>>name;
                while(!salida.eof()){
                    salida>>phone;

                    cout<<name<<"-->"<<phone<<endl;

                    salida>>name;
                }
            }
            salida.close();


        break;
        case 2:
             system("CLS");
             entrada.open("Contactos.txt", ios::out | ios::app); //Abre o crea el archivo, pero no lo sobreescribas

             if(entrada.fail()){
                cout<<"Ouch! Tuvimos un percance.";
             }
             else{

                cout<<"Agregar contacto"<<endl;
                cout<<"Nombre: "<<endl;
                cin >> name;
                cout<<"Telefono: ";
                cin >> phone;

                entrada<<name<<" "<<phone<<endl;
                entrada.close(); //Cerrar el flujo
             }

        break;
        case 3:
             system("CLS");
            cout<<"Modificar contacto"<<endl;
            cout<<"Introduzca el nombre del contacto que desea eliminar: ";
            cin>>comparador;
            cout<<"Introduzca el nuevo nombre: ";
            cin>>name;
            cout<<"Introduzca el nuevo telefono: ";
            cin>>phone;

            salida.open("Contactos.txt", ios::in);
            temporal.open("Temp.txt",ios::out); //Se necesita crear un archivo "temporal"  en el cual se efctuaran los cambios

            if(salida.fail()){
                cout<<"Houston, tenemmos un problema"<<endl;
            }
            else{
                    salida>>name;
                while(!salida.eof()){
                    salida>>phone;

                    if(name == comparador){

                        cout<<"Contacto encontrado"<<endl;
                    }
                    else{
                        temporal<<name<<" "<<phone<<endl;

                    }
                        salida>>name;
                      cout<<"Contacto modificado"<<endl;

                    }


                salida.close();
                temporal.close();
                remove("Contactos.txt");
                rename("Temp.txt", "Contactos.txt");
            }

        break;
        case 4:
             system("CLS");
            cout<<"Eliminar contacto"<<endl;
            cout<<"Introduzco el nombre del contacto que desea eliminar: ";
            cin>>comparador;

             salida.open("Contactos.txt", ios::in);
            temporal.open("Temp.txt",ios::out);

            if(salida.fail()){
                cout<<"Houston, tenemmos un problema"<<endl;
            }
            else{
                    salida>>name;
                while(!salida.eof()){

                    salida>>phone;

                    if(name == comparador){
                        cout<<"Contacto elminado"<<endl;//Nos brincamos el contacto

                    }
                    else{
                        temporal<<name<<" "<<phone<<endl;

                    }
                       salida>>name;

                }

                salida.close();
                temporal.close();
                remove("Contactos.txt");
                rename("Temp.txt", "Contactos.txt");
            }
        break;
        case 5:
             system("CLS");
            cout<<"Gracias por utilizar nuestra app."<<endl;
            cout << "Esto es todo amigos!" << endl;
            cout << "Jafet Gabriel Benitez Hidalgo" << endl;
            cout << "2013-1651" << endl;
            continuar = false;
        break;

    }
}










	return 0;

}
