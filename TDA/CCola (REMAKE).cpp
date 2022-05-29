#include <iostream>
#include "CCola.h"

using namespace std;

CColaEstatica::CColaEstatica(){
   indiceInsercion=-1;
    indiceEliminacion=-1;
}



bool CColaEstatica::isEmpty(){
    if(indiceEliminacion==-1){
        return 1;
    }
    else{
        return 0;
    }

}


bool CColaEstatica::isFull(){
    if(indiceEliminacion==ARRAYSIZE-1){
        return 1;
    }
    else {
      return 0;
    }

}



void CColaEstatica::push(float nd){

if(!isFull()){
        if(isEmpty()){
            indiceInsercion=0;
        }
datos[++indiceEliminacion]=nd;
}

else{

    cout<<"La pila ya esta llena"<<endl;
}


}
float CColaEstatica::pop(){

    int i;
    for(i=1;i<=indiceEliminacion;i++){
        datos[i-1]=datos[i];
    }
    indiceEliminacion--;


return 0;

}
int CColaEstatica::Ssize(){
    int i;
    tamanio=0;
    for(i=1;i<=indiceEliminacion;i++){
        tamanio++;
    }

return tamanio;
}


void CColaEstatica::imprimir(){
    int i;
    for(i=0;i<=Ssize();i++){
    cout<<datos[i]<<", ";

    }
    cout<<endl;


}
