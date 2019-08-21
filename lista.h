#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

//Agregar y mostrar

class lista
{
    public:
        lista();
        virtual ~lista();
        void mostrar();
        void agregar();
        bool vacia();
        nodo elemento;

    protected:

    private:

        nodo* ancla;
};

#endif // LISTA_H
