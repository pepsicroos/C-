#ifndef CPILA_H_INCLUDED
#define CPILA_H_INCLUDED
#define ARRAYSIZE 1000

class CPila {

private:
    float datos[1000];
    int indice;

public:
    void push(float nd);
    float pop();
    float tos();
    int ssize();
    bool isEmpty();
    bool isFull();
    void imprimir();
    CPila(){
    indice=-1;
    }


};




#endif // CPILA_H_INCLUDED
