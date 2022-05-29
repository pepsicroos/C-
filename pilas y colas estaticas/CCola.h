#ifndef CCOLA_H_INCLUDED
#define CCOLA_H_INCLUDED
#define ARRAYSIZE 1000



class CCola{

private:
     float datos[ARRAYSIZE];
     int indiceInsercion;
     int indiceEliminacion;
     int tamanio;

public:

    void push(float nd);
    float pop();
    int ssize();
    bool isEmpty();
    bool isFull();
    void imprimir();
    CCola();

};



#endif // CCOLA_H_INCLUDED
