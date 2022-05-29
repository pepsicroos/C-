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




};


#endif // CARBOL_H_INCLUDED
