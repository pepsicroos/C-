#ifndef CTORETTO_H_INCLUDED
#define CTORETTO_H_INCLUDED

#include <iostream>

using namespace std;


class CToretto: public CAuto{

public:
    void imprimirDatosToretto();
    int AcelerarToretto(int vel);
    int turbo();
    CToretto();
    ~CToretto();



};

CToretto::CToretto(){
Cilindro=8;
Cilindrada=1000;
cout<<"Construyendo el carro de Toretto"<<endl;

}

int CToretto::AcelerarToretto(int vel){
    vel=vel+3;
    velocidad=vel;

    return velocidad;

}

int CToretto::turbo(){


    velocidad=velocidad+6;

    return velocidad;
}



void CToretto::imprimirDatosToretto(){
     imprimirDatosAuto();

}

CToretto:: ~CToretto(){}





#endif // CTORETTO_H_INCLUDED
