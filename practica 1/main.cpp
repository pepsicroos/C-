#include <iostream>
#include <stdlib.h>

using namespace std;

int potencia(int iBase, int iExp);
void potencia2(int *pBase, int iExp);

int main()
{
    int iX, iY,basePotencia,baseExponente,resultadoPotencia;

    iX=5;
    iY=10;
    int *pA;
    int *pBase;
    pA=&iX;
    cout << "Parte 1"<<endl;
    cout << "El valor de iX es "<< iX<<endl;
    cout << "El valor del puntero es " << *pA << endl;
    cout<< "el valor de &iX es "<< &iX<< endl;
    cout<< "El valor de pA "<< pA<<endl;
    pA=&iY;
    cout << "El valor de iY es "<< iY<<endl;
    cout << "El valor del puntero es " << *pA << endl;
    cout << "el valor de &iY es "<< &iY<< endl;
    cout<< "El valor de pA "<< pA<<endl<< endl;


    basePotencia=5;
    baseExponente=3;
    cout << "Parte 2"<<endl;
    cout << "Numero base: "<< basePotencia <<endl;
    cout << "Base Exponente: "<< baseExponente <<endl;
    cout << " \nEjemplo potencia 1"<<endl;

    resultadoPotencia=potencia(basePotencia,baseExponente);
    cout<< "Numero: "<<basePotencia<< " Exponente " << baseExponente <<" Regresa "<<resultadoPotencia<<endl<<endl;
    pBase=&basePotencia;

    resultadoPotencia=potencia2(pBase,baseExponente)
    cout << " \n Ejemplo potencia 2"<<endl;

    cout<< "pBase: "<<*pBase<< " iExp " << baseExponente <<" Regresa "<< resultadoPotencia <<endl<<endl;





    return 0;
}

int potencia(int iBase, int iExp){
    int i,resultadoPotencia;
    resultadoPotencia=1;
    for(i=0;i<iExp;i++){
        resultadoPotencia*=iBase;
    }
    return resultadoPotencia;
}


void potencia2(int *pBase, int iExp){

     int resultadoPotencia,i;
     resultadoPotencia=1;
     for(i=0;i<iExp;i++){
            resultadoPotencia*=*pBase;

    }

}


