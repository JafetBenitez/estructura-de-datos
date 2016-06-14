#include <iostream>
#include "Arbol.h"

using namespace std;

 void  agregarRecursivo(Pariente* p)
        {
            string nombre;
            int numero;
            int n = 1;
         if(p->getHijos()>0){

                while(n <= p->getHijos())
                {
                    cout<<"Introduzca el nombre del hino #"<<n<<": "<<endl;
                    cin>>nombre;
                    cout<<"Introduzca el numero de hijos de "<<nombre<<": "<<endl;
                    cin>>numero;
                    Pariente* h = new Pariente(nombre);
                    h->setHijos(numero);
                    p->agregarHijos(h);
                    n++;
                }

            Pariente* pari = new Pariente(nombre);
            pari->setHijos(numero);
            agregarRecursivo(pari);
            p->agregarHijos(pari);
         }
         else{
            cout<<"Arbol terminado"<<endl;
         }
        }

int main()
{
    int opcion;
    Pariente* padre = new Pariente("Juan");
    bool menu = true;
    string nombre;
    int numero;
    Arbol* familia = new Arbol(padre);

while(menu){
    cout << "Arbol genealogico" << endl;
    cout<<"1- Crear arbol genealogico" << endl;
    cout<<"2- Desplegar arbol genealogico" << endl;
    cout<<"3- Salir" << endl;
    cin>>opcion;

    switch(opcion)
    {
    case 1:
        cout<<"Crear arbol genealogico" << endl;
        cout<<"Introduzca el nombre: "<<endl;
            cin>>nombre;
            cout<<"Introduzca el numero de hijos de "<<nombre<<": "<<endl;
            cin>>numero;
            padre->setNombre(nombre);
            padre->setHijos(numero);
            agregarRecursivo(padre);
            familia = new Arbol(padre);
        break;
    case 2:
        cout<<"Desplegar arbol genealogico" << endl;
        familia->recorrer(padre);
        break;
    case 3:
        cout<<"Jafet Gabriel Benitez Hidalgo [2013-1651]"<<endl;
        menu = false;
        break;
    }

}
    return 0;

}
