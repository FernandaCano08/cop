#include " nodo.h"

 nodo:: nodo()
{
    //ctor
}

 nodo::~ nodo()
{
    //dtor
}
void nodo::getDato(int a)
{
    ele=a;
}

int nodo::serDato()
{
    return ele;
}
