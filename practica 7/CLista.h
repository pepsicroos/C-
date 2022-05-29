#ifndef CLISTA_H_INCLUDED
#define CLISTA_H_INCLUDED

#include "Cnodo.h"


class CLista{

private:
    CNodo Inicio;
    CNodo Final;

    friend class CPila;

public:

    void InsertarInicio(float fData);
    void InsertarFinal();
    bool IsEmpty();
    int Size();
    void Vaciar();
    CLista();
    ~CLista();
    void Imprime();
    float EliminarInicio();
    float EliminarFinal();






};


#endif // CLISTA_H_INCLUDED
