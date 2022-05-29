#ifndef CARBOL_H_INCLUDED
#define CARBOL_H_INCLUDED
#include "BTnodo.h"


class Carbol{
private:
    BTnodo *pRaiz;


public:
    void insertarArbol(float nd);
    bool toLeft(float nd);
    bool toRight(float nd);
    void inOrder();
    void preorderArbol();
    void postOrder();
    Carbol();
    BTnodo* BuscarMalPadre(float nd);
    int CantidadHijos(BTnodo *padre);
    void Eliminar(float nd);
    BTnodo* ExtremaRight(BTnodo* paqui);
    BTnodo* dameUnicoHijo(BTnodo* padre);




};


#endif // CARBOL_H_INCLUDED
