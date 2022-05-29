#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int Tamanio(char* pszCadena);


int main()
{
    char* cadenaTexto;
    cadenaTexto="Hola Mundo";
    int ResultadoNumeroCaracteres;

    ResultadoNumeroCaracteres=Tamanio(cadenaTexto);
    cout<<cadenaTexto<< endl;
    cout<<ResultadoNumeroCaracteres<<endl;





    return 0;
}


int Tamanio(char* pszCadena)
{

    int numeroCaracteres;


    numeroCaracteres=strlen(pszCadena);

    return numeroCaracteres;

}

