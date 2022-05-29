#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "CLista.h"

#include <string>


class CCola{

private:

CLista lista;


public:

    void push(float nd);
    float pop();
    int Ssize();
    bool isEmpty();
    bool isFull();
    void imprimir();

};











#endif // QUEUE_H_INCLUDED
