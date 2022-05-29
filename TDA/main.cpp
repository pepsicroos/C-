#include <iostream>
#include "pilaocola.h"
#include "CPila.h"
#include "stack.h"
#include "queue.h"
#include "CCola.h"

using namespace std;

int main()

{
    int opcmenu;
    do{

    cout << "1.- Pila estatica " << endl;
    cout << "2.- Pila dinamica " << endl;
    cout << "3.- Cola estatica " << endl;
    cout << "4.- Cola dinamica " << endl;
    cout<<"5.- Salir"<<endl;
    cout << "Selecciona una opcion!" << endl;
    cin>>opcmenu;
    switch(opcmenu){
    case 1:{PilaoCola *ped=new CPilaEstatica;
           ped->push(5);//haciendo push en pila
           ped->push(6);//haciendo push en pila
           ped->push(7);//haciendo push en pila
           ped->push(8);//haciendo push en pila
           ped->push(9);//haciendo push en pila
           cout<<"Imprimiendo pila estatica..."<<endl;
           cout<<"Tamaño de la pila= "<<ped->Ssize()<<endl;
           ped->imprimir();
           ped->pop();//haciendo pop en pila
           cout<<"Haciendo pop en pila estatica..."<<endl;
           ped->imprimir();
           ped->push(0);//haciendo push otra vez en pila
           ped->push(1);//haciendo push otra vez en pila
           cout<<"Haciendo push otra vez en pila estatica..."<<endl;
           ped->imprimir();//solo se imprimira el 0 por que el arreglo llega a 5, no imprime mas

    }

    break;
    case 2:{PilaoCola *ped=new CPilaDinamica;
           ped->push(5);//haciendo push en pila
           ped->push(6);//haciendo push en pila
           ped->push(7);//haciendo push en pila
           ped->push(8);//haciendo push en pila
           ped->push(9);//No existe limite en la pila dinamica pero simplemente se eligio 5 datos para facilidad de ver
           cout<<"Imprimiendo pila dinamica..."<<endl;
           ped->imprimir();
           ped->pop();//haciendo pop en pila
           cout<<"Haciendo pop en pila dinamica..."<<endl;
           ped->imprimir();
           ped->push(0);//haciendo push otra vez en pila
           ped->push(1);//haciendo push otra vez en pila
           cout<<"Haciendo push otra vez en pila estatica..."<<endl;
           ped->imprimir();
           }
    break;
    case 3:{PilaoCola *ped=new CColaEstatica;
           ped->push(5);//haciendo push en cola
           ped->push(6);//haciendo push en cola
           ped->push(7);//haciendo push en cola
           ped->push(8);//haciendo push en cola
           ped->push(9);
           cout<<"Imprimiendo cola estatica..."<<endl;
           ped->imprimir();
           ped->pop();//haciendo pop en pila
           cout<<"Haciendo pop en cola estatica..."<<endl;
           ped->imprimir();

           }
    break;
    case 4:{
           PilaoCola *ped=new CColaDinamica;
           ped->push(5);//haciendo push en cola
           ped->push(6);//haciendo push en cola
           ped->push(7);//haciendo push en cola
           ped->push(8);//haciendo push en cola
           ped->push(9);
           cout<<"Imprimiendo cola estatica..."<<endl;
           ped->imprimir();
           ped->pop();//haciendo pop en pila
           cout<<"Haciendo pop en cola estatica..."<<endl;
           ped->imprimir();
           ped->push(0);//haciendo push otra vez en cola
           ped->push(1);//haciendo push otra vez en cola
           cout<<"Haciendo push otra vez en cola dinamica..."<<endl;
           ped->imprimir();
           }
    break;


    }
    }
    while(opcmenu!=5);

    return 0;
}
