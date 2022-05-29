#include <iostream>
#include "Carbol.h"


using namespace std;

Carbol::Carbol(){
pRaiz=NULL;
}

void Carbol::insertarArbol(float nd){
if(pRaiz==NULL){
    pRaiz=new BTnodo;
    pRaiz->fdata=nd;
}
else{

    pRaiz->insertar(nd);

}
}

void Carbol::preorderArbol(){
    if(pRaiz==NULL){
            cout<<"No valido"<<endl;


    }
    else{
       pRaiz->preorder();
    }


}

void Carbol::inOrder(){

        pRaiz->inOrder();


}

void Carbol::postOrder(){

    if(pRaiz!=NULL){
        pRaiz->postOrder();
    }

}
