#include "Cnodo.h"
#include <iostream>


using namespace std;

void CNodo::InsertarAdelante(float fData){

    CNodo* pnuevo= new CNodo();

        pnuevo->pSiguiente=this->pSiguiente;
        pnuevo->pAnterior=this;
        this ->pSiguiente= pnuevo;
        this ->pSiguiente->pSiguiente->pAnterior=pnuevo;
        pnuevo->fContenido=fData;




}

float CNodo::EliminarSiguiente(){

    float Datoeliminado;
    CNodo *pnuevo=this->pSiguiente;
    Datoeliminado=pnuevo->fContenido;

    this->pSiguiente->pSiguiente->pAnterior=this;
    this->pSiguiente=this->pSiguiente->pSiguiente;
    delete(pnuevo);


    return Datoeliminado;

}
