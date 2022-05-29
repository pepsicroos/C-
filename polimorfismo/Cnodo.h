#ifndef CNODO_H_INCLUDED
#define CNODO_H_INCLUDED
#include <iostream>


using namespace std;


class CNodo : public CAuto{


private:
     float fContenido;
     CNodo *pSiguiente;
     CNodo *pAnterior;
     CNodo *header;


     friend class CLista;

public:
    void InsertarAdelante();
    float EliminarSiguiente();

};



#endif // CNODO_H_INCLUDED
