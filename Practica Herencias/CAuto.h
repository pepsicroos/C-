#ifndef CAUTO_H_INCLUDED
#define CAUTO_H_INCLUDED
#include "CMotor.h"
#include <iostream>
#include <string>


using namespace std;


class CAuto: public CMotor{

protected:
    int velocidad;
    CMotor motor;


public:
    int acelerar(int vel);
    void imprimirDatosAuto();
    CAuto();
    ~CAuto();


};



CAuto::CAuto(){
Cilindro=4;
Cilindrada=110;
cout<<"Construyendo un auto"<<endl;
}


int CAuto::acelerar(int vel){
    vel++;
    velocidad=vel;

    return velocidad;

}

void CAuto::imprimirDatosAuto(){

    imprimir();
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}

CAuto::~CAuto(){
}


#endif // CAUTO_H_INCLUDED
