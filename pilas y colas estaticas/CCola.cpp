#include <iostream>
#include "CCola.h"

using namespace std;

CCola::CCola(): indiceInsercion(0), indiceEliminacion(ARRAYSIZE -1) {}

void CCola::push(float nd){

if(++indiceEliminacion== ARRAYSIZE){
    indiceEliminacion=0;
}
datos[indiceEliminacion]=nd;


}
float CCola::pop(){

    float getpop=datos[indiceInsercion];

if(++indiceInsercion == ARRAYSIZE){

    indiceInsercion=0;
}

return getpop;

}
int CCola::ssize(){
    int i,tamanioCola;
    tamanio=0;
    while(indiceEliminacion>indiceInsercion){
        for(i=0;i<indiceEliminacion;i++){
            tamanio++;

        }
        tamanioCola=tamanio;

    }

return tamanioCola;
}
bool CCola::isEmpty(){

    return indiceInsercion == indiceEliminacion + 1
         or (indiceInsercion== 0 and indiceEliminacion == ARRAYSIZE -1);

}
bool CCola::isFull(){

   return indiceInsercion == indiceEliminacion +2
            or(indiceInsercion==0 and indiceEliminacion == ARRAYSIZE - 2)
            or (indiceInsercion==1 and indiceEliminacion == ARRAYSIZE - 1);

}
void CCola::imprimir(){


    cout<<datos[indiceEliminacion--];


}
