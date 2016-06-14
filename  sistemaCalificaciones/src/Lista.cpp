#include "Lista.h"
#include <stdlib.h>
#include "fstream"

using namespace std;

Lista::Lista()
{
   _primero = _ultimo = NULL;

}

Lista::~Lista()
{
    //dtor
}
void Lista::visualizarEstudiantes()
{
    Estudiante* estudiante = _primero;
    cout<<"Id- nombre \tLit \tMat \tHist \tNat \tPromedio"<<std::endl<<std::endl;
    int i = 1;
    if(_primero != NULL)
        {
            while(estudiante)
    {
        cout<<i <<"- "<<estudiante->_nombre <<" "<< estudiante->_apellido<<" \t"<<
        estudiante->_literatura<<" \t"<<
        estudiante->_matematica<<" \t"<<
        estudiante->_historia<<" \t"<<
        estudiante->_naturales<<" \t"<<
        estudiante->_promedio<<endl;
        estudiante = estudiante->_siguiente;
        i= i+1;
    }
        }
    else{
        cout<<"La lista esta vacia"<<endl;
    }

}

void Lista::visualizarEstudiantesInverso()
{
    Estudiante* estudiante = _ultimo;
    cout<<"Id- nombre \t apellido \t Literatura \t Matematica \t Historia \t Naturales"<<std::endl<<std::endl;
    int i = 1;

    if(_primero != NULL)
        {
            while(estudiante)
    {
        cout<<i <<"- "<<estudiante->_nombre <<"\t"<< estudiante->_apellido<<"\t"<<
        estudiante->_literatura<<"\t"<<
        estudiante->_matematica<<"\t"<<
        estudiante->_historia<<"\t"<<
        estudiante->_naturales<<"\t"<<endl;
        estudiante = estudiante->_anterior;
        i= i+1;
    }
        }
    else{
        cout<<"La lista esta vacia"<<endl;
    }

}


void Lista::eliminar(int opcion)
{
    Estudiante* estudiante = _primero;
    string confirmar;
    //cout<<"Id- nombre || apellido || Literatura || Matematica || Historia || Naturales"<<std::endl<<std::endl;
    int i = 1;
    while(estudiante)
    {
        if(i == opcion)
        {
            cout<<"Nombre \tApellido \tLiteratura \tMatematica \tHistoria \tNaturales"<<endl;
               cout<<estudiante->_nombre <<" "<< estudiante->_apellido<<" \t"<<
                estudiante->_literatura<<" \t"<<
                estudiante->_matematica<<" \t"<<
                estudiante->_historia<<" \t"<<
                estudiante->_naturales<<" \t"<<endl;
            cout<<"Seguro de eliminar (S/N) :";
            cin>>confirmar;
            if((confirmar == "S") || (confirmar == "s"))
            {
                if(this->_primero == this->_ultimo)
                {
                    delete(estudiante);
                    _primero = _ultimo = NULL;
                    cout<<"El estudiante ha sido eliminado satisfactoriamente"<<endl;
                }
                else
                    {
                    estudiante->_anterior->_siguiente = estudiante->_siguiente;
                    delete(estudiante);
                    cout<<"El estudiante ha sido eliminado satisfactoriamente"<<endl;
                    }


            }
            else{
                cout<<"Eliminacion abortada"<<endl;
            }
               break; break;

        }

        estudiante = estudiante->_siguiente;
        i= i+1;
    }
}

void Lista::modificarEstudiante(int opcion)
{
    string texto;
    int nota;
    Estudiante* estudiante = _primero;

    int i = 1;
    bool menuModificar = true;
    int elegir;
     while(estudiante)
    {
        if(i == opcion)
        {

           while(menuModificar)
           {
               system("cls");
               cout<<"Id- nombre \tapellido \tLit \tMat \tHist \tNat \tPromedio"<<std::endl<<std::endl;

               cout<<i <<"- "<<estudiante->_nombre <<"\t"<<
               estudiante->_apellido<<"\t"<<
                estudiante->_literatura<<"\t"<<
                estudiante->_matematica<<"\t"<<
                estudiante->_historia<<"\t"<<
                estudiante->_naturales<<"\t"<<endl;

                cout<<"         Modificar: "<<endl
                <<"          1) Nombre"<<endl
                <<"          2) Apellido"<<endl
                <<"          3) Literatura"<<endl
                <<"          4) Matematica"<<endl
                <<"          5) Historia"<<endl
                <<"          6) Naturales"<<endl
                <<"          7) Salir"<<endl
                <<endl
                <<"             elegir: ";

                cin>>elegir;

                switch(elegir)
                {
                case 1:
                    cout<<"             Introducir nombre: ";
                    cin>>texto;
                    estudiante->_nombre = texto;
                    break;
                case 2:
                    cout<<"             Introducir apellido: ";
                    cin>>texto;
                    estudiante->_apellido = texto;
                    break;
                case 3:
                    cout<<"             Introducir nota de literatura: ";
                    cin>>nota;
                    estudiante->_literatura = nota;
                    break;
                case 4:
                    cout<<"             Introducir nota de matematica: ";
                    cin>>nota;
                    estudiante->_matematica = nota;
                    break;
                case 5:
                    cout<<"             Introducir nota de historia: ";
                    cin>>nota;
                    estudiante->_historia = nota;
                    break;
                case 6:
                    cout<<"             Introducir nota de naturales: ";
                    cin>>nota;
                    estudiante->_naturales = nota;
                    break;
                case 7:
                    estudiante->_promedio = estudiante->Promedio();
                    menuModificar = false;
                    break;
                default:
                    estudiante->_promedio = estudiante->Promedio();
                    menuModificar = false;
                    break;
                }
           }




        }

        estudiante = estudiante->_siguiente;
        i= i+1;
    }
}

    Estudiante* Lista::getPrimero()
    {
        return _primero;
    }

    Estudiante* Lista::getUltimo()
    {
        return _ultimo;

    }

    void Lista::setPrimero(Estudiante * primero)
    {
        _primero = primero;
    }

    void Lista::setUltimo(Estudiante * ultimo)
    {
        _ultimo = ultimo;
    }

void Lista::visualizarEstudiantes(Estudiante* estudiante)
{
    if(_primero != NULL)
        {
    cout<<endl
        <<" -------------------------------------------------------------------------"<<endl
        <<" |Nombre\t|Apellido\t|Lit\t|Mat\t|Hist\t|Nat\t|Promedio|"<<endl
        <<" -------------------------------------------------------------------------"<<std::endl<<std::endl;
    cout<<" "<<estudiante->_nombre <<"\t\t "<<
               estudiante->_apellido<<"\t\t "<<
                estudiante->_literatura<<"\t "<<
                estudiante->_matematica<<"\t "<<
                estudiante->_historia<<"\t "<<
                estudiante->_naturales<<"\t "<<
                estudiante->_promedio<<endl;
        }
    else{
        cout<<"La lista esta vacia"<<endl;
    }


}


void Lista::agregar(Estudiante* estudiante)
{
    if(!_primero)
    {
        _primero = _ultimo = estudiante;
    }
    else{
        _ultimo->_siguiente = estudiante;
        estudiante->_anterior = _ultimo;
        _ultimo = estudiante;
    }

}


Lista* Lista::ordenarCalificacion(int a)
    {
        Estudiante* estudiante = this->_primero;
        Lista* listaPromedio = new Lista();

           if(_primero != NULL)
        {


        /*
        1-Historia
        2-Naturales
        3-Matematica
        4-Literatura
        5-Promedio
        */
        switch(a){

        case 1:
        while(estudiante)
            {
                //En caso de que la lista este vacia...
                 if(!listaPromedio->_primero)
                {
                    listaPromedio->_primero = listaPromedio->_ultimo = estudiante;
                }
                //en caso de que la lista solo tenga un estudiante...
                else if(listaPromedio->_primero == listaPromedio->_ultimo)
                {
                    //comparamos si el estudiante a insertar es mayor que el unico elemento
                    if(listaPromedio->_primero->_historia < estudiante->_historia)
                    {
                        listaPromedio->_ultimo = estudiante;
                    }else
                    {
                        listaPromedio->_primero = estudiante;
                    }

                    listaPromedio->_ultimo->_anterior=listaPromedio->_primero;
                    listaPromedio->_ultimo->_siguiente=NULL;
                    listaPromedio->_primero->_anterior=NULL;
                    listaPromedio->_primero->_siguiente=listaPromedio->_ultimo;

                }
                //caso contrario al anterior
                else if(listaPromedio->_primero->_historia > estudiante->_historia)
                {
                    listaPromedio->_primero->_anterior = estudiante;
                    estudiante->_siguiente = listaPromedio->_primero;
                    estudiante->_anterior =  NULL;
                    listaPromedio->_primero = estudiante;

                }
                //comprobamos si el estudiante es mayor al ultimo de la lista
                else if(listaPromedio->_ultimo->_historia < estudiante->_historia)
                {
                    listaPromedio->_ultimo->_siguiente = estudiante;
                    estudiante->_anterior = listaPromedio->_ultimo;
                    listaPromedio->_ultimo = estudiante;
                }
                //si llegamos hasta aca, significa que la lista tiene mas de un estudiante
                else
                {
                    Estudiante* estudianteOrdenado = listaPromedio->_primero;
                    while(estudianteOrdenado->_historia < estudiante->_historia)
                    {
                        estudianteOrdenado = estudianteOrdenado->_siguiente;
                        if(estudianteOrdenado->_historia > estudiante->_historia )
                        {
                            Estudiante* prev = estudianteOrdenado->_anterior;
                            estudianteOrdenado->_anterior = estudiante;
                            estudiante->_siguiente = estudianteOrdenado;
                            estudiante->_anterior =prev;
                            prev->_siguiente = estudiante;
                        }
                    }

                }

                estudiante = estudiante->_siguiente;
            }

            break;
        case 2:
               while(estudiante)
            {
                //En caso de que la lista este vacia...
                 if(!listaPromedio->_primero)
                {
                    listaPromedio->_primero = listaPromedio->_ultimo = estudiante;
                }
                //en caso de que la lista solo tenga un estudiante...
                else if(listaPromedio->_primero == listaPromedio->_ultimo)
                {
                    //comparamos si el estudiante a insertar es mayor que el unico elemento
                    if(listaPromedio->_primero->_naturales < estudiante->_naturales)
                    {
                        listaPromedio->_ultimo = estudiante;
                    }else
                    {
                        listaPromedio->_primero = estudiante;
                    }

                    listaPromedio->_ultimo->_anterior=listaPromedio->_primero;
                    listaPromedio->_ultimo->_siguiente=NULL;
                    listaPromedio->_primero->_anterior=NULL;
                    listaPromedio->_primero->_siguiente=listaPromedio->_ultimo;

                }
                //caso contrario al anterior
                else if(listaPromedio->_primero->_naturales > estudiante->_naturales)
                {
                    listaPromedio->_primero->_anterior = estudiante;
                    estudiante->_siguiente = listaPromedio->_primero;
                    estudiante->_anterior =  NULL;
                    listaPromedio->_primero = estudiante;

                }
                //comprobamos si el estudiante es mayor al ultimo de la lista
                else if(listaPromedio->_ultimo->_naturales < estudiante->_naturales)
                {
                    listaPromedio->_ultimo->_siguiente = estudiante;
                    estudiante->_anterior = listaPromedio->_ultimo;
                    listaPromedio->_ultimo = estudiante;
                }
                //si llegamos hasta aca, significa que la lista tiene mas de un estudiante
                else
                {
                    Estudiante* estudianteOrdenado = listaPromedio->_primero;
                    while(estudianteOrdenado->_naturales < estudiante->_naturales)
                    {
                        estudianteOrdenado = estudianteOrdenado->_siguiente;
                        if(estudianteOrdenado->_naturales > estudiante->_naturales )
                        {
                            Estudiante* prev = estudianteOrdenado->_anterior;
                            estudianteOrdenado->_anterior = estudiante;
                            estudiante->_siguiente = estudianteOrdenado;
                            estudiante->_anterior =prev;
                            prev->_siguiente = estudiante;
                        }
                    }

                }

                estudiante = estudiante->_siguiente;
            }


            break;
        case 3:
               while(estudiante)
            {
                //En caso de que la lista este vacia...
                 if(!listaPromedio->_primero)
                {
                    listaPromedio->_primero = listaPromedio->_ultimo = estudiante;
                }
                //en caso de que la lista solo tenga un estudiante...
                else if(listaPromedio->_primero == listaPromedio->_ultimo)
                {
                    //comparamos si el estudiante a insertar es mayor que el unico elemento
                    if(listaPromedio->_primero->_matematica < estudiante->_matematica)
                    {
                        listaPromedio->_ultimo = estudiante;
                    }else
                    {
                        listaPromedio->_primero = estudiante;
                    }

                    listaPromedio->_ultimo->_anterior=listaPromedio->_primero;
                    listaPromedio->_ultimo->_siguiente=NULL;
                    listaPromedio->_primero->_anterior=NULL;
                    listaPromedio->_primero->_siguiente=listaPromedio->_ultimo;

                }
                //caso contrario al anterior
                else if(listaPromedio->_primero->_matematica > estudiante->_matematica)
                {
                    listaPromedio->_primero->_anterior = estudiante;
                    estudiante->_siguiente = listaPromedio->_primero;
                    estudiante->_anterior =  NULL;
                    listaPromedio->_primero = estudiante;

                }
                //comprobamos si el estudiante es mayor al ultimo de la lista
                else if(listaPromedio->_ultimo->_matematica < estudiante->_matematica)
                {
                    listaPromedio->_ultimo->_siguiente = estudiante;
                    estudiante->_anterior = listaPromedio->_ultimo;
                    listaPromedio->_ultimo = estudiante;
                }
                //si llegamos hasta aca, significa que la lista tiene mas de un estudiante
                else
                {
                    Estudiante* estudianteOrdenado = listaPromedio->_primero;
                    while(estudianteOrdenado->_matematica < estudiante->_matematica)
                    {
                        estudianteOrdenado = estudianteOrdenado->_siguiente;
                        if(estudianteOrdenado->_matematica > estudiante->_matematica )
                        {
                            Estudiante* prev = estudianteOrdenado->_anterior;
                            estudianteOrdenado->_anterior = estudiante;
                            estudiante->_siguiente = estudianteOrdenado;
                            estudiante->_anterior =prev;
                            prev->_siguiente = estudiante;
                        }
                    }

                }

                estudiante = estudiante->_siguiente;
            }


            break;
        case 4:
                  while(estudiante)
            {
                //En caso de que la lista este vacia...
                 if(!listaPromedio->_primero)
                {
                    listaPromedio->_primero = listaPromedio->_ultimo = estudiante;
                }
                //en caso de que la lista solo tenga un estudiante...
                else if(listaPromedio->_primero == listaPromedio->_ultimo)
                {
                    //comparamos si el estudiante a insertar es mayor que el unico elemento
                    if(listaPromedio->_primero->_literatura < estudiante->_literatura)
                    {
                        listaPromedio->_ultimo = estudiante;
                    }else
                    {
                        listaPromedio->_primero = estudiante;
                    }

                    listaPromedio->_ultimo->_anterior=listaPromedio->_primero;
                    listaPromedio->_ultimo->_siguiente=NULL;
                    listaPromedio->_primero->_anterior=NULL;
                    listaPromedio->_primero->_siguiente=listaPromedio->_ultimo;

                }
                //caso contrario al anterior
                else if(listaPromedio->_primero->_literatura > estudiante->_literatura)
                {
                    listaPromedio->_primero->_anterior = estudiante;
                    estudiante->_siguiente = listaPromedio->_primero;
                    estudiante->_anterior =  NULL;
                    listaPromedio->_primero = estudiante;

                }
                //comprobamos si el estudiante es mayor al ultimo de la lista
                else if(listaPromedio->_ultimo->_literatura < estudiante->_literatura)
                {
                    listaPromedio->_ultimo->_siguiente = estudiante;
                    estudiante->_anterior = listaPromedio->_ultimo;
                    listaPromedio->_ultimo = estudiante;
                }
                //si llegamos hasta aca, significa que la lista tiene mas de un estudiante
                else
                {
                    Estudiante* estudianteOrdenado = listaPromedio->_primero;
                    while(estudianteOrdenado->_literatura < estudiante->_literatura)
                    {
                        estudianteOrdenado = estudianteOrdenado->_siguiente;
                        if(estudianteOrdenado->_literatura > estudiante->_literatura )
                        {
                            Estudiante* prev = estudianteOrdenado->_anterior;
                            estudianteOrdenado->_anterior = estudiante;
                            estudiante->_siguiente = estudianteOrdenado;
                            estudiante->_anterior =prev;
                            prev->_siguiente = estudiante;
                        }
                    }

                }

                estudiante = estudiante->_siguiente;
            }

            break;
        case 5:


            while(estudiante)
            {
                //En caso de que la lista este vacia...
                 if(!listaPromedio->_primero)
                {
                    listaPromedio->_primero = listaPromedio->_ultimo = estudiante;
                }
                //en caso de que la lista solo tenga un estudiante...
                else if(listaPromedio->_primero == listaPromedio->_ultimo)
                {
                    //comparamos si el estudiante a insertar es mayor que el unico elemento
                    if(listaPromedio->_primero->_promedio < estudiante->_promedio)
                    {
                        listaPromedio->_ultimo = estudiante;
                    }else
                    {
                        listaPromedio->_primero = estudiante;
                    }

                    listaPromedio->_ultimo->_anterior=listaPromedio->_primero;
                    listaPromedio->_ultimo->_siguiente=NULL;
                    listaPromedio->_primero->_anterior=NULL;
                    listaPromedio->_primero->_siguiente=listaPromedio->_ultimo;

                }
                //caso contrario al anterior
                else if(listaPromedio->_primero->_promedio > estudiante->_promedio)
                {
                    listaPromedio->_primero->_anterior = estudiante;
                    estudiante->_siguiente = listaPromedio->_primero;
                    estudiante->_anterior =  NULL;
                    listaPromedio->_primero = estudiante;

                }
                //comprobamos si el estudiante es mayor al ultimo de la lista
                else if(listaPromedio->_ultimo->_promedio < estudiante->_promedio)
                {
                    listaPromedio->_ultimo->_siguiente = estudiante;
                    estudiante->_anterior = listaPromedio->_ultimo;
                    listaPromedio->_ultimo = estudiante;
                }
                //si llegamos hasta aca, significa que la lista tiene mas de un estudiante
                else
                {
                    Estudiante* estudianteOrdenado = listaPromedio->_primero;
                    while(estudianteOrdenado->_promedio < estudiante->_promedio)
                    {

                        if(estudianteOrdenado->_promedio > estudiante->_promedio )
                        {
                            Estudiante* prev = estudianteOrdenado->_anterior;
                            estudianteOrdenado->_anterior = estudiante;
                            estudiante->_siguiente = estudianteOrdenado;
                            estudiante->_anterior =prev;
                            prev->_siguiente = estudiante;
                        }
                        estudianteOrdenado = estudianteOrdenado->_siguiente;
                    }

                }

                estudiante = estudiante->_siguiente;
            }


            break;

        }
        return listaPromedio;

        }
    else{
        cout<<"La lista esta vacia"<<endl;
        return listaPromedio;
    }

    }

     void Lista::exportarLista()
            {
            ofstream entrada;
            entrada.open("Estudiantes.txt", ios::out); //Abre o crea el archivo, pero no lo sobreescribas
            Estudiante* e = this->_primero;
            while(e != NULL)
            {
                entrada<<e->getApellido()<<" "<<
                e->getNombre()<<" "<<
                e->_literatura<<" "<<
                e->_matematica<<" "<<
                e->_historia<<" "<<
                e->_naturales<<" "<<endl;

                e = e->_siguiente;
            }
            }

void Lista::cargarLista()
{
    ifstream salida;

    string apellido;
    string nombre;
    int literatura;
    int matematica;
    int historia;
    int naturales;

    salida.open("Estudiantes.txt", ios::in);

    if(salida.fail()){
            cout<<"Archivo de carga no encontrado"<<endl;
            }
    else{

        salida>>apellido;

        while(!salida.eof()){

            salida>>nombre>>literatura>>matematica>>historia>>naturales;



            Estudiante * e = new Estudiante(apellido, nombre, literatura, matematica, naturales, historia);
            this->agregar(e);


           salida>>apellido;
                }
            }

            salida.close();
}
