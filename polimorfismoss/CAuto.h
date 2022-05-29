#ifndef CAUTO_H_INCLUDED
#define CAUTO_H_INCLUDED
#include "menu.h"


using namespace std;


class CAuto{

protected:
    int velocidad;
    CMotor motor;


public:
    int acelerar(int vel);
    void imprimirDatosAuto();
    virtual void imprimirDatosVirtual();

    void CreaAuto();
    CAuto();
    ~CAuto();


};



CAuto::CAuto(){
velocidad=50;
cout<<"Construyendo un auto"<<endl;
}


int CAuto::acelerar(int vel){
    vel++;
    velocidad=vel;

    return velocidad;

}

void CAuto::imprimirDatosAuto(){

    cout<<"Soy un auto"<<endl;
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}

void CAuto::imprimirDatosVirtual(){
    cout<<"Soy un auto"<<endl;
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}




CAuto::~CAuto(){
}


void CAuto::CreaAuto(){
    int opcion=0;
    bool respuesta;
do{
Menu mymenu;
mymenu.subMenu();
cout<<"Selecciona una opcion ";
cin>>opcion;
switch(opcion){
    case 1:cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<acelerar(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }

    break;
    case 2:imprimirDatosAuto();
    break;
    case 3: opcion=3;
    break;
    default:cout<<"Selecciona una opcion valida";




}

}while(opcion!=3);





}
#endif // CAUTO_H_INCLUDED
