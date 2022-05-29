#ifndef CNODO_H_INCLUDED
#define CNODO_H_INCLUDED


class CNodo{


private:
     float fContenido;
     CNodo *pSiguiente;
     CNodo *pAnterior;
     CNodo *header;

     friend class CLista;


public:
    void InsertarAdelante(float fData);
    float EliminarSiguiente();

};



#endif // CNODO_H_INCLUDED
