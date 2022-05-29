#include "queue.h"


using namespace std;


bool CColaDinamica::isEmpty(){
 lista.IsEmpty();
 return 0;
}


bool CColaDinamica::isFull() {
if (!lista.IsEmpty()){
        lista.EliminarFinal();


}
return 0;
}

void CColaDinamica::push(float nd){

lista.InsertarInicio(nd);

}


 float CColaDinamica::pop(){
 return lista.EliminarInicio();
 }

 int CColaDinamica::Ssize(){


 return lista.Size();

 }

 void CColaDinamica::imprimir(){

lista.Imprime();
}
