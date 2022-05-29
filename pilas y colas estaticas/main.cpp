#include <iostream>
#include "CPila.h"
#include "CCola.h"




using namespace std;

int main()
{

    CPila pila;
    CCola cola;
    int i;

    pila.push(5);
    pila.push(6);
    pila.push(7);

    cola.push(1);
    cola.push(2);
    cola.push(3);
    for(i=0;i<3;i++){
        cout<<pila.pop();
    }
    cout<<endl;

    for(i=0;i<3;i++){
        cout<<cola.pop();
    }
    cout<<endl;
    cout<<endl;
    for(i=0;i<3;i++){
      pila.imprimir();
    }
    cout<<endl;
    cout<<endl;
    for(i=0;i<3;i++){
      cola.imprimir();
    }












    return 0;
}
