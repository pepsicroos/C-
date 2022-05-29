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

    header=new CNodo;
    CNodo* fData= header->pSiguiente->pSiguiente;
    delete header ->pSiguiente;
    header->pSiguiente=fData;
    fData->pAnterior=header;
    return 0;


}
