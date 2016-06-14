#include "Elemento.h"
class Lista{
      private:
              Elemento* inicio;
              Elemento* fin;
      public:
             void agregar(Elemento* elemento);
             Elemento* getInicio();
             void setInicio(Elemento* inicio);
             Elemento* getFin();
             void setFin(Elemento* fin);
};
