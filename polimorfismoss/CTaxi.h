#ifndef CTAXI_H_INCLUDED
#define CTAXI_H_INCLUDED
#include <iostream>
#include "CAuto.h"

using namespace std;

class CTaxi: public CAuto{
public:
    int acelerarTaxi(int vel);
    void imprimirDatosTaxi();
    virtual void imprimirDatosVirtual();
    void creaTaxi();
    CTaxi();


};


CTaxi::CTaxi(){

cout<<"Construyendo un Taxi"<<endl;

}

int CTaxi::acelerarTaxi(int vel){
    vel=vel+5;
    velocidad=vel;

    return velocidad;

}

void CTaxi::imprimirDatosTaxi(){
    cout<<"Soy un taxi"<<endl;
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;


}

void CTaxi::imprimirDatosVirtual(){
    cout<<"Soy un taxi"<<endl;
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}



void CTaxi::creaTaxi(){
     int opcion;
    bool respuesta;
do{
Menu mymenu;
mymenu.subMenu();
cout<<"Selecciona una opcion ";
cin>>opcion;
switch(opcion){
    case 1:
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<acelerarTaxi(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
    break;
    case 2:imprimirDatosTaxi();
    break;
    case 3:opcion=3;
    break;
    default:cout<<"Selecciona una opcion valida";
    break;



}

}while(opcion!=3);



}


#endif // CTAXI_H_INCLUDED
