#include "Lista.h"
#include <stdlib.h>

using namespace std;

int main(){

    bool go = true;
    int menu, num = 1, nro = 1;
    Lista* lista = new Lista();
    Cancion* cancion;
    Cancion* i;
    Cancion* first;
    string nombre, artista, duracion;
    bool r = false;

while(go){
        cout << "Bienvenidos al sistema de Vellonera" << endl;
        cout << "1- Agregar nueva canción" << endl;
        cout << "2- Visualizar canciones" << endl;
        cout << "3- Mostrar canción actual" << endl;
        cout << "4- Próxima Canción" << endl;
        cout << "5-Canción Anterior" << endl;
        cout << "6-Activar Repetición en lista" << endl;
        cout << "7- Eliminar" << endl;
        cout << "8- Salir" << endl;
    cin >> menu;
    switch(menu){

    case(1):


          system("cls");
        cout <<"Agregar Nueva Cancion \n"<<endl;
        cout <<"Introduzca el titulo: \t"<<endl;
        cin >> nombre;
        cout <<"Introduzca el artista: \t"<<endl;
        cin >> artista;
        cout <<"Introduzca la duracion: \t"<<endl;
        cin >> duracion;

        cancion = new Cancion(num, nombre, artista, duracion);
        lista->agregar(cancion);
        num+=1;
        break;

    case(2):

           system("cls");

        cout << "Listado de Canciones" << endl;
           i = lista->getPrimero();
            first = lista->getPrimero();

            while(i!=NULL){
               cout <<i->getId()<<"-  \t"<< i->getNombre()<<"\t "<< i->getArtista()<<"\t "<< i->getDuracion()<<endl;

               i= i->getSiguiente();

                if(i == first){
                    if(nro >1){
                        break;
                    }
                    nro++;
               }
            }

        break;

    case(3):
        system("cls");
        cout << "Cancion Actual:" << endl;
           cancion = lista->extraer();
        cout << cancion->getNombre() <<", "<<cancion->getArtista()<<" "<<cancion->getDuracion()<<endl;


        break;

    case(4):
            system("cls");
         cout <<"Avanzando a la proxima pista..."<<endl;
         count<<"Pista actual: ";
            cancion = lista->getActual();
            cancion = cancion->getSiguiente();
         cout << cancion->getNombre() <<"--"<<cancion->getArtista()<<endl;
            lista->setActual(cancion);

        break;

    case(5):
        system("cls");
        cancion = lista->getActual();
        cancion = cancion->getAnterior();
        cout << "Retrocediendo a la pista anterior..." << endl;
        count<<"Pista actual: ";
        cout << cancion->getNombre() <<"--"<<cancion->getArtista()<<endl;
                lista->setActual(cancion);

        break;

    case(6):
            system("cls");
            cancion = lista->getUltimo();
        if(lista->getRepetir() == true){
            lista->setRepetir(false);
            cancion->setSiguiente(NULL);
            cout << "Repeticion en lista desactivado.  \n " << endl;
        }
        else{
            lista->setRepetir(true);
            cancion->setSiguiente(lista->getPrimero());
        cout << "Repeticion en lista activado.  \n " << endl;
        }

        break;

    case(7):
        system("cls");
        lista->lista();
        lista->eliminar(0);


        break;

    case(8):
        cout << "Jafet Gabriel [2013-1651]" << endl;
        go= false;
        break;

    default:
            cout << "Opcion invalida, seleccione de nueva." << endl;
    }
    }

return 0;
}
