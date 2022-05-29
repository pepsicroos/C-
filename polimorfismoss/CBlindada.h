#ifndef CBLINDADA_H_INCLUDED
#define CBLINDADA_H_INCLUDED
#include "CAuto.h"

class CBlindada: public CAuto{

private:
    int Blindaje;



public:
    int AgregaBlindaje();
    float acelerarBlindada(int vel);
    void imprimirDatosBlindada();
    virtual void imprimirDatosVirtual();
    void creaBlindada();
    CBlindada();
    ~CBlindada();


};

CBlindada::CBlindada(){
Blindaje=0;
velocidad=50;
cout<<"Construyendo una Blindada"<<endl;
}

int CBlindada::AgregaBlindaje(){
    Blindaje=Blindaje+5;

    return Blindaje;

}

float CBlindada::acelerarBlindada(int vel){

    vel=vel+5;
    velocidad=vel;

    return velocidad;

}

void CBlindada::imprimirDatosBlindada(){

     cout<<"Soy una patrulla blindada"<<endl;
     cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
     cout<<"Tienes un blindaje de "<<Blindaje<<endl;

}

void CBlindada::imprimirDatosVirtual(){
     cout<<"Soy una patrulla blindada"<<endl;
     cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;
     cout<<"Tienes un blindaje de "<<Blindaje<<endl;

}



void CBlindada::creaBlindada(){
    int opcion;
    bool respuesta;
do{
Menu mymenu;
mymenu.subMenuBlindada();
cout<<"Selecciona una opcion ";
cin>>opcion;
switch(opcion){
    case 1:
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<acelerarBlindada(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
    break;
    case 2:cout << "Quieres aplicar blindaje 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Tu blindaje ahora es de "<<Blindaje<<endl;

                        }
                        else{
                            cout<<"Tu blindaje sigue siendo "<<Blindaje<<endl;

                        }
    case 3:imprimirDatosBlindada();
    break;
    case 4:opcion=4;
    break;
    default: cout<<"Selecciona una opcion valida";
    break;



}

}while(opcion!=4);



}

CBlindada::~CBlindada(){}




#endif // CBLINDADA_H_INCLUDED
