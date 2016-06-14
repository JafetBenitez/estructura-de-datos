#include <iostream>
#include "Lista.h"
#include <stdlib.h>
#include "fstream"

using namespace std;

    int opcion;
    int opcionM;
    int opcionE;
    string apellido;
    string nombre;
    int matematica;
    int historia;
    int literatura;
    int naturales;
    double promedio;
    char confirmar;
    int eliminar;
    bool estado = false;
    bool menu = true;
    Lista* estudiantes = new Lista();
    Estudiante* insertarEstudiante;

void Menu(){

cout<<"             --------------------------------------------------"<<endl
    <<"             |### Bienvenidos al sistema de Calificaciones ###|"<<endl
    <<"             --------------------------------------------------"<<endl<<endl

        <<" 1| Agregar nuevo estudiante"<<endl
        <<" 2| Modificar estudiante"<<endl
        <<" 3| Eliminar estudiante"<<endl
        <<" 4| Visualizaciones"<<endl
        <<" 5| Salir"<<endl<<endl<<endl
        <<" Opcion: ";

}

void AgregarNuevoEstudiante()
{
    system("cls");
    cout<<"             --------------------------------------------------"<<endl
        <<"             |###            Registrar Estudiante           ###|"<<endl
        <<"             --------------------------------------------------"<<endl<<endl;

            cout<<" Introduzca el nombre: "; cin>>nombre;
            cout<<endl<<" Introduzca el apellido: "; cin>>apellido;
            cout<<endl<<" Introduzca calificacion literatura: "; cin>>literatura;
            cout<<endl<<" Introduzca calificacion matematica: "; cin>>matematica;
            cout<<endl<<" Introduzca calificacion historia: "; cin>>historia;
            cout<<endl<<" Introduzca calificacion naturales: "; cin>>naturales;

            insertarEstudiante = new Estudiante(apellido, nombre, literatura, matematica, naturales, historia);
            estudiantes->agregar(insertarEstudiante);
            estudiantes->visualizarEstudiantes(insertarEstudiante);
            cout<<endl<<endl<<"El estudiante ha sido agregado satisfactoriamente... "<<endl;
}

void ModificarEstudiante()
{
    system("cls");
            cout<<"Modificar estudiante"<<endl;
            estudiantes->visualizarEstudiantes();
            cout<<endl<<"Opcion: ";
            cin>>opcionM;
            estudiantes->modificarEstudiante(opcionM);
}

void EliminarEstudiante()
{

            system("cls");
            cout<<"Eliminar estudiante:"<<endl;
            estudiantes->visualizarEstudiantes();
            cout<<"Opcion: "<<endl;
            cin>>opcionE;
            estudiantes->eliminar(opcionE);
}

void ListaDeEstudiantes()
{

            system("cls");
            cout<<"Visualizar estudiantes"<<endl;
            estudiantes->visualizarEstudiantes();
}

void PromedioMenor()
{
    system("cls");

            if(estudiantes->getUltimo() != NULL){
                 estudiantes->ordenarCalificacion(5);
            cout<<"Estudiante con menor promedio"<<endl;
            cout<<"Nombre ||Apellido || Literatura ||Matematica ||Historia ||Naturales"<<endl;
               cout<<estudiantes->getUltimo()->getNombre() <<" ||"<<
                estudiantes->getUltimo()->getApellido()<<" ||"<<
                estudiantes->getUltimo()->getLiteratura()<<" ||"<<
                estudiantes->getUltimo()->getMatematica()<<" ||"<<
                estudiantes->getUltimo()->getHistoria()<<" ||"<<
                estudiantes->getUltimo()->getNaturales()<<" ||"<<endl;

            }
            else{
            cout<<"Lista vacia"<<endl;
            }

}

void PromedioMayor()
{
    system("cls");

            if(estudiantes->getPrimero() != NULL){

                estudiantes->ordenarCalificacion(5);
            cout<<"Estudiante con mayor promedio"<<endl;
            cout<<"Nombre ||Apellido || Literatura ||Matematica ||Historia ||Naturales"<<endl;
               cout<<estudiantes->getPrimero()->getNombre() <<" ||"<<
                estudiantes->getPrimero()->getApellido()<<" ||"<<
                estudiantes->getPrimero()->getLiteratura()<<" ||"<<
                estudiantes->getPrimero()->getMatematica()<<" ||"<<
                estudiantes->getPrimero()->getHistoria()<<" ||"<<
                estudiantes->getPrimero()->getNaturales()<<" ||"<<endl;
            }
            else{

                cout<<"Lista vacia"<<endl;
            }
}
void VisualizarEstudiantes()
{
    system("cls");
    estudiantes->visualizarEstudiantes();
}

void Salir()
{
    system("cls");
    estudiantes->exportarLista();
    cout<<"Saliendo del sistema...";
    menu = false;
}


void VisualizarEstudiantesInverso()
{
    system("cls");
    estudiantes->visualizarEstudiantesInverso();
}

void Visualizaciones()
{
    system("cls");
    int opcionVisualizar;

    cout<<"             --------------------------------------------------"<<endl
        <<"             |###      Informacion de los estudiantes      ###|"<<endl
        <<"             --------------------------------------------------"<<endl<<endl


        <<" 1| Estudiantes"<<endl
        <<" 2| Promedio menor "<<endl
        <<" 3| Promedio mayor "<<endl
        <<" 4| Promedios general (DESCENDENTE)"<<endl
        <<" 5| Promedios general (ASCENDENTE)"<<endl
        <<" 6| Volver al menu principal"<<endl<<endl<<endl
        <<" Opcion :"
        ;
        cin>>opcionVisualizar;
        switch(opcionVisualizar)
        {

        case 1:
            ListaDeEstudiantes();
            break;
        case 2:
            PromedioMenor();
            break;
        case 3:
            PromedioMayor();
            break;
        case 4:
            VisualizarEstudiantes();
            break;
        case 5:
            VisualizarEstudiantesInverso();
            break;
        case 6:
            break;
        }

}

int main()
{
    estudiantes->cargarLista();

    while(menu)
    {
        Menu();
        cin>>opcion;

        switch(opcion)
        {
        case 1:
            AgregarNuevoEstudiante();
            break;
        case 2:
            ModificarEstudiante();

            break;
        case 3:
            EliminarEstudiante();
            break;
        case 4:
            Visualizaciones();
            break;
        case 5:
            Salir();
            break;
        default:



            Salir();
            break;
                }
         system("pause");
         system("cls");
    }

    return 0;
}
