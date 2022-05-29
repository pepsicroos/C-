#include <iostream>
#include "CPila.h"

using namespace std;



bool CPilaEstatica::isEmpty(){

return indice == -1;

}

bool CPilaEstatica::isFull(){

    if(indice==ARRAYSIZE-1){
        return 1;
    }
    else {
      return 0;
    }

}

void CPilaEstatica::push(float nd){

if(!isFull()){
datos[++indice]=nd;
}

else{

    cout<<"La pila ya esta llena"<<endl;
}
}

float CPilaEstatica::pop(){

return datos[indice--];

}

float CPilaEstatica::tos(){

return datos[indice];

}

void CPilaEstatica::imprimir(){
    int i;
for(i=0;i<Ssize();i++){
    cout<<datos[i]<<", ";
}
cout<<endl;


}

int CPilaEstatica::Ssize(){
int i,tamanio=0;
for(i=0;i<=indice;i++){
    tamanio++;

}
return tamanio;
}










