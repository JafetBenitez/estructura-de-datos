#include "Lista.h"
#include <cstdlib>
int main(){
    Elemento* cancion1 = new Elemento("Prendelo");
    Elemento* cancion2 = new Elemento("Delirio");
    Elemento* cancion3 = new Elemento("Mueve tu chapa");
    Elemento* cancion4 = new Elemento("Y sin embargo");
    Elemento* cancion5 = new Elemento("Delirium tremens");
    Elemento* cancion6 = new Elemento("La rubia platino");    
    Lista* lista = new Lista();
    lista -> agregar(cancion1);
    lista -> agregar(cancion2);
    lista -> agregar(cancion3);
    lista -> agregar(cancion4);
    lista -> agregar(cancion5);
    lista -> agregar(cancion6);
    
    Elemento *i = lista -> getInicio();
    while(i != NULL){
            cout << i -> getNombre() << endl;
            i = i -> getSiguiente();        

    }
    delete lista;
    system("pause");
    return EXIT_SUCCESS;   
}
