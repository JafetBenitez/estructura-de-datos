#include <iostream>
using namespace std;
int main()
{
    int nodos =0;
    int aristas =0;
    int algoritmo =0;

    cout << "Complejidad Ciclomatica" << endl;
    cout << "1-Regiones" << endl;
    cout << "2-Nodos y Aristas" << endl;
    cout << "3-Solo nodos" << endl;
    cout << "Sleccione su algoritmo: ";
    cin>>algoritmo;

    switch(algoritmo){
    case 1:
        cout<<"Introduzca el numero de regiones: ";
        cin>>nodos;
        cout<<"La complejidad ciclomatica de sus sistema es: "<< nodos;
        break;
    case 2:
        cout<<"Introduzca el numero de nodos: ";
        cin>>nodos;
        cout<<"Introduzca el numero de aristas: ";
        cin>>aristas;
        cout<<"La complejidad ciclomatica de sus sistema es: "<< aristas - nodos +2;

        break;
    case 3:
        cout<<"Introduzca el numero de nodos: ";
        cin>>nodos;
        cout<<"La complejidad ciclomatica de sus sistema es: "<<nodos+1;
        break;
    default:
        cout<<"Bye!";
    }
    return 0;
}
