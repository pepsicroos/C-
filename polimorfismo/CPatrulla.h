#ifndef CPATRULLA_H_INCLUDED
#define CPATRULLA_H_INCLUDED


class CPatrulla: public CAuto{


public:

    int acelerarPatrulla(int vel);
    void imprimirDatosPatrulla();
    CPatrulla();
    ~CPatrulla();


};

CPatrulla::CPatrulla(){
cout<<"Construyendo una patrulla"<<endl;

}

int CPatrulla::acelerarPatrulla(int vel){
    vel=vel+2;
    velocidad=vel;

    return velocidad;

}

void CPatrulla::imprimirDatosPatrulla(){
    imprimirDatosAuto();

}

CPatrulla::~CPatrulla(){}



#endif // CPATRULLA_H_INCLUDED
