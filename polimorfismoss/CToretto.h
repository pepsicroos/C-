#ifndef CTORETTO_H_INCLUDED
#define CTORETTO_H_INCLUDED

#include <iostream>

using namespace std;


class CToretto: public CAuto{

public:
    void imprimirDatosToretto();
    virtual void imprimirDatosVirtual();
    int AcelerarToretto(int vel);
    int turbo();
    void CreaToretto();
    CToretto();
    ~CToretto();



};

CToretto::CToretto(){

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
      cout<<"Soy el carro de toretto"<<endl;
      cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;

}

void CToretto::imprimirDatosVirtual(){
      cout<<"Soy el carro de toretto"<<endl;
      cout<<"Vas a "<<velocidad<<" Km/hr"<<endl;

}



void CToretto::CreaToretto(){

    int opcion;
    bool respuesta;
do{
Menu mymenu;
mymenu.subMenuToretto();
cout<<"Selecciona una opcion ";
cin>>opcion;
switch(opcion){
    case 1:
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<AcelerarToretto(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
    break;
    case 2:             cout << "Quieres aplicar el turbo 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<turbo()<<" Km/hr"<<endl;
                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
    break;
    case 3:imprimirDatosToretto();
    break;
    case 4:opcion=4;
    break;
    default: cout<<"Selecciona una opcion valida"<<endl;
    break;



}

}while(opcion!=4);




}

CToretto:: ~CToretto(){}


#endif // CTORETTO_H_INCLUDED
