#ifndef CLISTA_H_INCLUDED
#define CLISTA_H_INCLUDED
#include "CMotor.h"
#include "CAuto.h"
#include "CPatrulla.h"
#include "CTaxi.h"
#include "CToretto.h"
#include "CBlindada.h"
#include <iostream>
#include "Cnodo.h"

using namespace std;



class CLista: public CAuto{

private:
    CNodo Inicio;
    CNodo Final;
    CAuto *pauto;

public:

    void InsertarInicio( CAuto*);
    void InsertarFinal(CAuto *);
    bool IsEmpty();
    int Size();
    void Vaciar();
    CLista();
    ~CLista();
    void ImprimeTodo();
    float EliminarInicio();
    float EliminarFinal();






};


CLista::CLista(){
    Inicio.pSiguiente=&Final;
    Final.pAnterior=&Inicio;

}

void CLista::InsertarInicio(CAuto *a){

Inicio.InsertarAdelante(a);


}

void CLista::InsertarFinal(CAuto *a){


Final.InsertarAdelante(a);

}

int CLista::Size(){

int i=0,tamanio=0;
CNodo *p=Inicio.pSiguiente;
for(i=0;p!=&Final;i++){
    p=p->pSiguiente;
    tamanio++;

}
return tamanio;

}

bool CLista::IsEmpty(){

    return (Inicio.pSiguiente=&Final);

}

void CLista::Vaciar(){

  CNodo *fData= new CNodo();
  while(fData != NULL) {
    fData = &Inicio;
    fData = Inicio.pSiguiente->pSiguiente;
    free(fData);
  }
}

float CLista::EliminarInicio(){

    CNodo *fdata= Inicio.pSiguiente->pSiguiente->pSiguiente;

    delete Inicio.pSiguiente->pSiguiente;
    Inicio.pSiguiente->pSiguiente=fdata;
    fdata->pAnterior=Inicio.pAnterior;

    return 0;


}

float CLista::EliminarFinal(){
    CNodo *nd= Final.pAnterior->pAnterior->pAnterior;
    delete Final.pAnterior->pAnterior;

    Final.pAnterior->pAnterior=nd;
    nd->pSiguiente=Final.pSiguiente;

    return 0;

}

void CLista::ImprimeTodo(){
     cout<<"Lista de autos..."<<endl<<endl;
CNodo *p=Inicio.pSiguiente;
while(p!=&Final){

    p->fcontenido->imprimirDatosVirtual();
    p=p->pSiguiente;
    cout<<endl;

}







}

CLista::~CLista(){

    EliminarInicio();
    EliminarFinal();
    delete Inicio.pSiguiente;
    delete Final.pAnterior;

}





#endif // CLISTA_H_INCLUDED
