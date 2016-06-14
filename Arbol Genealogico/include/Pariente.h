#ifndef PARIENTE_H
#define PARIENTE_H
#include "string"


class Pariente
{
    public:
        void agregarHijos(Pariente* p);



        Pariente* getPrimerHijo()
        {
            return _primerHijo;
        }

        Pariente* getUltimo()
        {
            return _ultimo;
        }

        Pariente* getSiguiente()
        {
            return _siguiente;
        }

        std::string getNombre()
        {
            return _nombre;
        }

        int getHijos()
        {
            return _nHijos;
        }

        void setPrimerHijo(Pariente* p)
        {
            _primerHijo = p;
        }

        void setNombre(std::string s)
        {
            _nombre = s;
        }

        void setSiguiente(Pariente* p)
        {
            _siguiente = p;
        }

        void setUltimo(Pariente* p)
        {
            _ultimo = p;
        }
        void setHijos(int n){
            _nHijos = n;
        }
        Pariente(std::string n);
        virtual ~Pariente();
    protected:
    private:
        std::string _nombre;
        Pariente* _primerHijo;
        Pariente* _siguiente;
        Pariente* _ultimo;
        int _nHijos;
};

#endif // PARIENTE_H
