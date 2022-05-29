#ifndef CMOTOR_H_INCLUDED
#define CMOTOR_H_INCLUDED


using namespace std;

class CMotor{

    protected:
        int Cilindro;
        int Cilindrada;
        void imprimir();

public:
        CMotor();



};

CMotor::CMotor(){}





void CMotor::imprimir(){

    cout<<"Tienes un motor con "<<Cilindro<<" cilindros"<<endl;
    cout<<"Tienes una cilindrada de "<<Cilindrada<<" caballos"<<endl;

}



#endif // CMOTOR_H_INCLUDED
