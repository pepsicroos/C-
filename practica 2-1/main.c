#include <stdio.h>
#include <stdlib.h>


int Tamanio(char* pszCadena);
void ImprimeReves(char* pszCadena);
void Reves(char* pszCadena);


int main()
{
    char* cadenaTexto;
    cadenaTexto="Hola Mundo";
    int ResultadoNumeroCaracteres;




    ResultadoNumeroCaracteres=Tamanio(cadenaTexto);
    printf("%s \n",cadenaTexto);
    printf("%d  \n",ResultadoNumeroCaracteres);

    ImprimeReves(cadenaTexto);

    Reves(cadenaTexto);


    return 0;
}


int Tamanio(char* pszCadena)
{

    int numeroCaracteres,j;
    numeroCaracteres=0;

    for(j=0;pszCadena[j]!='\0';j++){

       numeroCaracteres++;
    }



    return numeroCaracteres;

}

void ImprimeReves(char* pszCadena){
    int i,j;
    for(j=0;pszCadena[j]!='\0';j++){

    }
    for(i=j-1;i>=0;i--){

        printf("%c \n",pszCadena[i]);

    }
}


void Reves(char* pszCadena){

    int i,j;
    for(j=0;pszCadena[j]!='\0';j++){

    }
    for(i=j-1;i>=0;i--){

        printf("%c ",pszCadena[i]);

    }
}
