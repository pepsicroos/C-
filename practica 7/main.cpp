#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main()
{
    CPila pila;
    CCola cola;

    pila.push(6.6);
    pila.push(8);

    pila.imprimir();
    cout<<endl;

    cola.push(10);
    cola.push(11);
    cola.imprimir();


    return 0;
}
