#include "stack.h"


using namespace std;





bool CPilaDinamica::isEmpty(){

 return lista.IsEmpty();
}


bool CPilaDinamica::isFull() {
if (!isEmpty()){
    return lista.EliminarInicio();


}
else{
return 0;
}

}

void CPilaDinamica::push(float nd){

lista.InsertarInicio(nd);




}


 float CPilaDinamica::pop(){

 return lista.EliminarFinal();
 }

 int CPilaDinamica::Ssize(){


 return lista.Size();

 }


float CPilaDinamica::tos(){

float contenidoTos;

contenidoTos=lista.EliminarInicio();
lista.InsertarInicio(contenidoTos);

return contenidoTos;
}

void CPilaDinamica::imprimir(){

lista.Imprime();
}
