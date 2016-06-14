#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
class Lista{
     private:
         Item* incio;
         Item* fin;
     public:
        void agregar(Item* item);
        Item* getInicio();
        void setInicio(Item* item);
        Item* getFin();
        void setFin(Item* item);
};

#endif // LISTA_H_INCLUDED
