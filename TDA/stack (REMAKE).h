#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "CLista.h"
#include "pilaocola.h"

class CPilaDinamica: public PilaoCola {

  private:
  CLista lista;


public:

    virtual void push(float nd);
    virtual float pop();
    float tos();
    virtual int Ssize();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void imprimir();


};





#endif // STACK_H_INCLUDED
