#include <iostream>
#include <string>
#include <cstring>



using namespace std;



class CCadena {
private:
    char szBuffer[128];

public:

    void Leer();
    void Imprimir();
    int Tamanio();
    void ImprimeReves();
    void Reves();

};


void CCadena::Leer(){
   gets(szBuffer);

}

void CCadena::Imprimir(){

    cout<<szBuffer<< endl;
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

    int i,j,cadenaAlreves[50];
    for(j=0;szBuffer[j]!='\0';j++){

    }
    for(i=j-1;i>=0;i--){

      szBuffer[i]=cadenaAlreves[i];

    }
}




int main()
{

    CCadena cadena;

    cout << "Dame una cadena de no mas de 128 caracteres ";
    cadena.Leer();
    cadena.Imprimir();
    cout<<cadena.Tamanio();
    cout<<endl;
    cadena.ImprimeReves();
    cadena.Reves();



    return 0;
}
