#include "stack.h"


using namespace std;





bool CPila::isEmpty(){
 lista.IsEmpty();
 return 0;
}


bool CPila::isFull() {
if (!lista.IsEmpty()){
        lista.EliminarInicio();


}
return 0;
}

void CPila::push(float nd){

lista.InsertarInicio(nd);
}


 float CPila::pop(){
 return lista.EliminarInicio();
 }

 int CPila::Ssize(){


 return lista.Size();

 }


float CPila::tos(){

float contenidoTos;

contenidoTos=lista.EliminarInicio();
lista.InsertarInicio(contenidoTos);

return contenidoTos;
}

void CPila::imprimir(){

lista.Imprime();
}
