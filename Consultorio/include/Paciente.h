#ifndef PACIENTE_H
#define PACIENTE_H
#include "string"
using namespace std;
class Paciente
{
    public:
        Paciente();
        Paciente(string n, string apellido, string t);
        virtual ~Paciente();

        string getNombre(){
            return nombre;
        }

        void setNombre(string n){
            nombre = n;
        }
         string getApellido(){
            return apellido;
        }

        void setApellido(string a){
            apellido = a;
        }

         string getTelefono(){
            return telefono;
        }

        void setTelefono(string t){
            telefono = t;
        }

         Paciente* getSiguiente(){
            return siguiente;
        }

        void setSiguiente(Paciente* p){
            siguiente = p;
        }


    protected:
    private:
        string nombre;
        string apellido;
        string telefono;
        Paciente* siguiente;
};

#endif // PACIENTE_H
