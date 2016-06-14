#include <iostream>

using namespace std;


 int getPoblacion(int n, int p){
     //n = numero de bacterias iniciales
     //p = poblacion a retornar

    switch(n){
    case 0:
        return 0;
    break;
    case 1:
        p = p +n+5;
        n = 0;
        return p;
    break;
    default :
        n = n-1;
        p = p +3;
        getPoblacion(n, p); //Recursividad
    break;

    }



}
//Funcion para calcular poblacion de Bacteria XYZ en accion
int main()
{
    bool continuar = true;
    char salir = NULL;
    int poblacion = 0;
    int  bacterias;

    while(continuar){
        cout << "Bacteria XYZ" << endl;
        cout << "Inroduzca el numero de bacterias: ";
        cin>>bacterias;
        cout<<"La poblacion de bacterias es "<<getPoblacion(bacterias, poblacion)<<endl;
        cout << "\n Salir? [s] para salir, [cualquier otra tecla] para continuar" << endl;
        cin>>salir;
        if (salir == 's'){
            cout<<"\n Jafet Gabiel Benitez Hidalgo [2013-1651]"<<endl;
            continuar = false;
        }

    }
    return 0;


}
