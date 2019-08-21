#ifndef  NODO_H
#define  NODO_H


class  nodo
{
    public:
         nodo();
        virtual ~ nodo();
        void getDato(int a);
        int serDato();
        nodo* siguiente;

    protected:

    private:
        int ele;


};

#endif //  NODO_H
