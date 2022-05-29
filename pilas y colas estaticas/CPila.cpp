#include <iostream>
#include "CPila.h"

using namespace std;



bool CPila::isEmpty(){

return indice == -1;

}

bool CPila::isFull(){

    if(indice==ARRAYSIZE-1){
        return 1;
    }
    else {
      return 0;
    }

}

void CPila::push(float nd){

if(!isFull()){
datos[++indice]=nd;
}

else{

    cout<<"La pila ya esta llena"<<endl;
}
}

float CPila::pop(){

return datos[indice--];

}

float CPila::tos(){

return datos[indice];

}

void CPila::imprimir(){

cout<<datos[++indice];

}

int CPila::ssize(){
int i,tamanio=0;
for(i=0;i<indice;i++){
    tamanio++;

}
return tamanio;
}










