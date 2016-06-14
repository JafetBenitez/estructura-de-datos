#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "string"


class Estudiante
{
    public:
        Estudiante(std::string apellido, std::string nombre, int literatura, int matematica, int naturales, int historia);
        std::string getNombre();
        std::string getApellido();
        int getLiteratura();
        int getNaturales();
        int getMatematica();
        int getHistoria();
        void setLiteratura(int l);
        void setNaturales(int n);
        void setMatematica(int m);
        void setHistoria(int h);
        double Promedio();

        virtual ~Estudiante();
    protected:
    private:
        std::string _apellido;
        std::string _nombre;
        int _literatura;
        int _matematica;
        int _naturales;
        int _historia;
        double _promedio;
        Estudiante* _siguiente;
        Estudiante* _anterior;

    public: friend class Lista;



};

#endif // ESTUDIANTE_H
