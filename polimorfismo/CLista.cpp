#include <iostream>
#include "CLista.h"

using namespace std;


CLista::CLista(){
    Inicio.pSiguiente=&Final;
    Final.pAnterior=&Inicio;

}

void CLista::InsertarInicio( float fData){
/*Inicio.InsertarAdelante(CAuto);*/

}

void CLista::InsertarFinal(){

Final.pAnterior->pAnterior->EliminarSiguiente();

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
    delete fData;
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

void CLista::Imprime(){

CNodo *p=Inicio.pSiguiente;


while(p!=&Final){

    cout<<p->fContenido;
    p=p->pSiguiente;
    }
    cout<<endl;



}

CLista::~CLista(){

    delete Inicio.pSiguiente;
    delete Final.pAnterior;

}

















