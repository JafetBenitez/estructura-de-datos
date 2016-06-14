#include <string>
#include <iostream>
using namespace std;
class Elemento
{
      private:
              string nombre;
              Elemento* siguiente;
      public:      
              string getNombre();
              void setNombre(string nombre);
              Elemento* getSiguiente();
              void setSiguiente(Elemento* elemento);
              Elemento(string nombre);
};

