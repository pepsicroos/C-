#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class CCadena {
private:
    char szBuffer[128];

public:
    CCadena(char );
    void Leer();
    void Imprimir();
    int Tamanio();
    void ImprimeReves();
    void Reves();

};

CCadena::CCadena(char szBuffer[128]) {

    szBuffer[128]=szBuffer[128];

}

void CCadena::Leer(){

    cin>>szBuffer;
}

void CCadena::Imprimir(){

    cout<<szBuffer[128]<< endl;
}

int CCadena::Tamanio(){

    int numeroCaracteres,j;
    numeroCaracteres=0;

    for(j=0;szBuffer[j]!='\0';j++){

       numeroCaracteres++;
    }



    return numeroCaracteres;

}

void CCadena::ImprimeReves(){

    int i,j;
    for(j=0;szBuffer[j]!='\0';j++){

    }
    for(i=j-1;i>=0;i--){

        cout <<szBuffer[i]<<endl;

    }

}

void CCadena::Reves(){

    int i,j;
    for(j=0;szBuffer[j]!='\0';j++){

    }
    for(i=j-1;i>=0;i--){

       cout<<szBuffer[i];

    }
}




int main()
{

    CCadena ccadena;
    char guardaCadena[128];
    cout << "Dame una cadena de no mas de 128 caracteres" << endl;
    scanf("%s", guardaCadena);

    return 0;
}
