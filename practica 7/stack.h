#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "CLista.h"

class CPila {

  private:
  CLista lista;


public:

    void push(float nd);
    float pop();
    float tos();
    int Ssize();
    bool isEmpty();
    bool isFull();
    void imprimir();



};





#endif // STACK_H_INCLUDED
