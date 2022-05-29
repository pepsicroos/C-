#ifndef CBLINDADA_H_INCLUDED
#define CBLINDADA_H_INCLUDED


class CBlindada: public CAuto{

private:
    int Blindaje;


public:
    int AgregaBlindaje();
    float acelerarBlindada(int vel);
    void imprimirDatosBlindada();
    CBlindada();
    ~CBlindada();


};

CBlindada::CBlindada(){
Blindaje=0;
Cilindro=8;
Cilindrada=200;
cout<<"Construyendo una Blindada"<<endl;
}

int CBlindada::AgregaBlindaje(){
    Blindaje=Blindaje+5;

    return Blindaje;

}

float CBlindada::acelerarBlindada(int vel){

    vel=vel+5;
    velocidad=vel;

    return velocidad;

}

void CBlindada::imprimirDatosBlindada(){

     imprimirDatosAuto();
     cout<<"Tienes un blindaje de "<<Blindaje<<endl;

}

CBlindada::~CBlindada(){}



#endif // CBLINDADA_H_INCLUDED
