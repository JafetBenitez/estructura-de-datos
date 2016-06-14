#include <iostream>
#include "stdlib.h"
#include <ctime>

using namespace std;

int main()
{
    bool go = true;
    int menu =0;

    struct tm hour;

    hour.tm_min = 5;
    hour.tm_sec = 59;
    hour.tm_isdst =0;
    hour.tm_mday= 6;
    hour.tm_year=1999
    char* p = asctime(&hour);
    int l = hour.tm_min;
        cout<< p<<endl;

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
        cin>>menu;

        switch(menu){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            system("cls");
            cout<<"Jafet Gabriel [2013-1651]"<<endl;
            go = false;
            break;
        default:
            system("cls");
            cout<<"Opcion no valida"<<endl;
        }

    }
    return 0;
}
