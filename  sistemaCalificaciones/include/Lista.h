#ifndef LISTA_H
#define LISTA_H
#include "Estudiante.h"
#include <iostream>


class Lista
{
    public:

        Lista();
        Estudiante* getPrimero();
        Estudiante* getUltimo();
        void setPrimero(Estudiante * primero);
        void setUltimo(Estudiante * ultimo);
        void agregar(Estudiante* estudiante);
        void visualizarEstudiantes(Estudiante* estudiante);
        void visualizarEstudiantes();
        void visualizarEstudiantesInverso();
        void modificarEstudiante(int opcion);
        void eliminar(int opcion);
        Lista* ordenarCalificacion(int a);
        void exportarLista();
        void cargarLista();
        virtual ~Lista();
    protected:
    private:
        Estudiante* _primero;
        Estudiante* _ultimo;
};

#endif // LISTA_H
