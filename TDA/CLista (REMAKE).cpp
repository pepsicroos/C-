#include <iostream>
#include "CLista.h"

using namespace std;


CLista::CLista(){


    Inicio.pSiguiente=&Final;
    Final.pAnterior=&Inicio;

}

void CLista::InsertarInicio( float fData){

Final.pAnterior->InsertarAdelante(fData);


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
    fData = &Inicio;
    fData = Inicio.pSiguiente->pSiguiente;
    free(fData);
  }
}

float CLista::EliminarInicio(){

    /*CNodo *fdata= Inicio.pSiguiente->pSiguiente->pSiguiente;

    delete Inicio.pSiguiente->pSiguiente;
    Inicio.pSiguiente->pSiguiente=fdata;
    fdata->pAnterior=Inicio.pAnterior;*/

    Inicio.EliminarSiguiente();

    return 0;


}

float CLista::EliminarFinal(){

    CNodo *nd= Final.pAnterior->pAnterior;
    nd->EliminarSiguiente();

    return 0;

}

void CLista::Imprime(){

CNodo *p=Inicio.pSiguiente;


while(p!=&Final){

        cout<<p->fContenido <<" ";
        p=p->pSiguiente;
    }
    cout<<endl;



}

CLista::~CLista(){

    EliminarInicio();
    EliminarFinal();
    delete Inicio.pSiguiente;
    delete Final.pAnterior;

}

















