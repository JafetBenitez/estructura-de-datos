#ifndef LIBRO_H
#define LIBRO_H
#include "string"


class Libro
{
    public:
        Libro(std::string titulo, std::string autor, std::string isbn, int cantidad);
        Libro();
        virtual ~Libro();
        Libro * getAnterior();
        std::string getTitulo();
        std::string getAutor();
        std::string getISBN();
        int getCantidad();
        bool getEstado();
        void setEstado(bool e);
        void setCantidad(int c);
        void setTitulo(std::string t);
        void setAutor(std::string a);
        void setISBN(std::string i);
        void setAnterior(Libro* s);
    protected:
    private:
         std::string _titulo;
         std::string _autor;
         std::string _isbn;
         int _cantidad;
         bool _estado;//TRUE = Disponible; FALSE = Agotado
         Libro* _anterior;
};

#endif // LIBRO_H
