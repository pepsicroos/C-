#ifndef CTAXI_H_INCLUDED
#define CTAXI_H_INCLUDED


#include <iostream>

using namespace std;

class CTaxi: public CAuto{
public:
    int acelerarTaxi(int vel);
    void imprimirDatosTaxi();
    CTaxi();


};


CTaxi::CTaxi(){
Cilindro=4;
Cilindrada=100;
cout<<"Construyendo un Taxi"<<endl;

}

int CTaxi::acelerarTaxi(int vel){
    vel=vel+5;
    velocidad=vel;

    return velocidad;

}

void CTaxi::imprimirDatosTaxi(){
     imprimirDatosAuto();


}




#endif // CTAXI_H_INCLUDED
