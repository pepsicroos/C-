#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "CLista.h"
#include "pilaocola.h"

#include <string>


class CColaDinamica: public PilaoCola{

private:

CLista lista;


public:

    virtual void push(float nd);
    virtual float pop();
    virtual int Ssize();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void imprimir();

};











#endif // QUEUE_H_INCLUDED
