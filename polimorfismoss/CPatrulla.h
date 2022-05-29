#ifndef CPATRULLA_H_INCLUDED
#define CPATRULLA_H_INCLUDED
#include "CAuto.h"

class CPatrulla: public CAuto{


public:

    int acelerarPatrulla(int vel);
    void imprimirDatosPatrulla();
    virtual void imprimirDatosVirtual();
    void creaPatrulla();
    CPatrulla();
    ~CPatrulla();


};

CPatrulla::CPatrulla(){

velocidad=50;
cout<<"Construyendo una patrulla"<<endl;

}

int CPatrulla::acelerarPatrulla(int vel){
    vel=vel+2;
    velocidad=vel;

    return velocidad;

}

void CPatrulla::imprimirDatosPatrulla(){
    cout<<"Soy un patrulla"<<endl;
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}

void CPatrulla::imprimirDatosVirtual(){
    cout<<"Soy un patrulla"<<endl;
    cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
}


void CPatrulla::creaPatrulla(){
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
                            cout<<"Ahora vas a "<<acelerarPatrulla(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
    break;
    case 2:imprimirDatosPatrulla();
    break;
    case 3:opcion=3;
    break;
    default: cout<<"Selecciona una opcion valida";
    break;



}

}while(opcion!=3);


}

CPatrulla::~CPatrulla(){}


#endif // CPATRULLA_H_INCLUDED
