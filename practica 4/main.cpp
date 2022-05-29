#include <iostream>

#include "CLista.h"

using namespace std;

int main()
{

    CLista lista;

    lista.InsertarInicio(6);
    lista.InsertarInicio(5);
    lista.InsertarInicio(5);
    lista.InsertarInicio(5);
    lista.EliminarFinal();//elimina el ultimo dato quedando 6,5,5
    lista.EliminarInicio();//elimina el primer quedando 5,5


    lista.Imprime();//solo imprime 5,5



    return 0;
}
