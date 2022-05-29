#include "queue.h"


using namespace std;


bool CCola::isEmpty(){
 lista.IsEmpty();
 return 0;
}


bool CCola::isFull() {
if (!lista.IsEmpty()){
        lista.EliminarFinal();


}
return 0;
}

void CCola::push(float nd){

lista.InsertarInicio(nd);
}


 float CCola::pop(){
 return lista.EliminarFinal();
 }

 int CCola::Ssize(){


 return lista.Size();

 }

 void CCola::imprimir(){

lista.Imprime();
}
