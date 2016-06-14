#ifndef CLIENTE_H
#define CLIENTE_H
#include "string"


class Cliente
{
    public:
        Cliente(std::string nombre, std::string apellido, std::string direccion);
        Cliente();
        virtual ~Cliente();

        std::string getNombre();
        std::string getApellido();
        std::string getDireccion();
        Cliente* getSiguiente();
        void setSiguiente(Cliente* c);
        void setNombre(std::string n);
        void setApellido(std::string a);
        void setDireccion(std::string d);
    protected:
    private:
        std::string _nombre;
        std::string _apellido;
        std::string _direccion;
        Cliente* _siguiente;
};

#endif // CLIENTE_H
