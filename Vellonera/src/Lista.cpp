#include "Lista.h"


using namespace std;

Lista::Lista() : primero(NULL), ultimo(NULL), actual(NULL), repetir(false)
{

}
void Lista::agregar(Cancion* elemento)
{
        if(primero ==NULL){
        primero= elemento;
        actual = primero;
        ultimo = elemento;
    }
    else{
        elemento->setAnterior(ultimo);
        ultimo->setSiguiente(elemento);
        ultimo = elemento;
    }

}

void Lista::eliminar( int posicion)
{
        Cancion* ant = NULL;
         Cancion* aux = this->getPrimero();
         string nom;


                cout <<"Elija el Id de la cancion  a eliminar: \t";
                cin>> posicion;
                if(this!=NULL){

                while(aux != NULL && aux->getId()!=posicion){
                        ant = aux;
                        aux= aux->getSiguiente();

                    }

                        if(aux->getId()== posicion){
                            if(ant==NULL){
                            this->setPrimero(aux->getSiguiente());

                            }
                            else{
                            ant->setSiguiente( aux->getSiguiente());
                            }
                            nom = aux->getNombre();
                            delete(aux);
                            }



                cout <<"La cancion "<< nom <<" ha sido eliminado!!!";
                }
            else{
                 cout <<"Aun no se han registrado valores!!!";
            }

}

void Lista::lista()
{
            cout << "Listado de Canciones\n " << endl;
           i = this->getPrimero();

            while(i!=NULL){
               cout <<i->getId()<<"-  "<< i->getNombre()<<" "<< i->getArtista()<<" "<< i->getDuracion()<<endl;
               i= i->getSiguiente();

            }

}

Cancion* Lista::getActual()
{
    return actual;
}

void Lista::setActual(Cancion* can)
{
    this->actual = can;
}



Cancion* Lista::extraer()
{
       if(primero == NULL)
    {
        return NULL;
    }
    Cancion* retorno = actual;
    actual = retorno ->getSiguiente();
    return retorno;
}

Cancion* Lista::getUltimo()
{
    return ultimo;
}

void Lista::setUltimo(Cancion* can)
{
    this->ultimo = can;
}

Cancion* Lista::getPrimero()
{
    return primero;
}

void Lista::setPrimero(Cancion* can)
{
    this->primero = can;
}

bool Lista::getRepetir()
{
    return repetir;
}

void Lista::setRepetir(bool rep)
{
    this->repetir = rep;
}

Lista::~Lista()
{
    //dtor
}
