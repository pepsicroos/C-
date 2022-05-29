#ifndef CAUTO_H_INCLUDED
#define CAUTO_H_INCLUDED
#include <iostream>
#include <string>


using namespace std;


class CAuto{

protected:
    int velocidad;


public:
    int acelerar(int vel);
    void imprimirDatosAuto();
    virtual CAuto();
    ~CAuto();


};



CAuto::CAuto(){

cout<<"Construyendo un auto"<<endl;
}


int CAuto::acelerar(int vel){
    vel++;
    velocidad=vel;

    return velocidad;

}

void CAuto::imprimirDatosAuto(){

    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}

CAuto::~CAuto(){
}


#endif // CAUTO_H_INCLUDED
