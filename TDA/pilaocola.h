#ifndef PILAOCOLA_H_INCLUDED
#define PILAOCOLA_H_INCLUDED

class PilaoCola{

public:
    virtual void push(float nd)=0;
    virtual float pop()=0;
    virtual int Ssize()=0;
    virtual void imprimir()=0;
    virtual bool isFull()=0;
    virtual bool isEmpty()=0;



};



#endif // PILAOCOLA_H_INCLUDED
