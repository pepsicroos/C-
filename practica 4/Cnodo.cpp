#include "Cnodo.h"
#include <iostream>

using namespace std;

void CNodo::InsertarAdelante(float fData){

    CNodo* pnuevo= new CNodo();//crea nuevo nodo

        pnuevo->pSiguiente=this->pSiguiente;
        pnuevo->pAnterior=this;
        this ->pSiguiente= pnuevo;
        this ->pSiguiente->pSiguiente->pAnterior=pnuevo;
        pnuevo->fContenido=fData;//se fuarda el dato que deposita el usuario en el punterto del Nodo




}

float CNodo::EliminarSiguiente(){ //metodo para borrar un nodo de la memoria

    float Datoeliminado;
    CNodo *pnuevo=this->pSiguiente;
    Datoeliminado=pnuevo->fContenido;

    this->pSiguiente->pSiguiente->pAnterior=this;
    this->pSiguiente=this->pSiguiente->pSiguiente;
    delete(pnuevo);


    return Datoeliminado;

}
