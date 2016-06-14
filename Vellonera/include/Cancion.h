#ifndef CANCION_H
#define CANCION_H
#include <string>

using namespace std;

class Cancion
{
    public:
        Cancion(int id,string titulo, string cantante, string duracion);
        virtual ~Cancion();
        string getNombre();
        void setNombre( string n);
        string getArtista();
        void setArtista(string a);
        string getDuracion();
        void setDuracion(string d);
        int getId();
        void setId(int id);
        Cancion* getSiguiente();
        void setSiguiente(Cancion* c);
        Cancion* getAnterior();
        void setAnterior(Cancion* c);



    private:
        string nombre;
        string artista;
        string duracion;
        Cancion* siguiente;
        Cancion* anterior;
        int id;
};

#endif // CANCION_H
