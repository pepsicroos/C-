#ifndef CCOLA_H_INCLUDED
#define CCOLA_H_INCLUDED
#define ARRAYSIZE 5
#include "pilaocola.h"



class CColaEstatica : public PilaoCola{

private:
     float datos[ARRAYSIZE];
     int indiceInsercion;
     int indiceEliminacion;
     int tamanio;

public:

    virtual void push(float nd);
    virtual float pop();
    virtual int Ssize();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void imprimir();
    CColaEstatica();

};



#endif // CCOLA_H_INCLUDED
