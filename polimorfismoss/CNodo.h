#ifndef CNODO_H_INCLUDED
#define CNODO_H_INCLUDED
#include "CAuto.h"

class CNodo{


private:
     CNodo *pSiguiente;
     CNodo *pAnterior;
     CNodo *header;
     CAuto *fcontenido;

     friend class CLista;

public:
    void InsertarAdelante(CAuto *);
    CAuto* EliminarSiguiente();

};


void CNodo::InsertarAdelante(CAuto *a){

    CNodo* pnuevo= new CNodo();

        pnuevo->pSiguiente=this->pSiguiente;
        pnuevo->pAnterior=this;
        this ->pSiguiente= pnuevo;
        this ->pSiguiente->pSiguiente->pAnterior=pnuevo;
        pnuevo->fcontenido=a;




}

CAuto* CNodo::EliminarSiguiente(){

    header=new CNodo;
    CNodo* fData= header->pSiguiente->pSiguiente;
    delete header ->pSiguiente;
    header->pSiguiente=fData;
    fData->pAnterior=header;
    return 0;


}


#endif // CNODO_H_INCLUDED
