#ifndef CPILA_H_INCLUDED
#define CPILA_H_INCLUDED
#define ARRAYSIZE 5
#include "pilaocola.h"

class CPilaEstatica: public PilaoCola {

private:
    float datos[ARRAYSIZE];
    int indice;

public:
    virtual void push(float nd);
    virtual float pop();
    float tos();
    virtual int Ssize();
    virtual bool isEmpty();
    virtual bool isFull();
    void imprimir();
    CPilaEstatica(){indice=-1;}


};




#endif // CPILA_H_INCLUDED
