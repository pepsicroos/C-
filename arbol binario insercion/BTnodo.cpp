#include <iostream>
#include "BTnodo.h"


using namespace std;


BTnodo::BTnodo(){
    pizq=NULL;
    pder=NULL;
}


bool BTnodo::toLeft(float nd){

    if(nd>fdata){
        return true;
    }
    else{
        return false;
    }


}

void BTnodo::insertar(float nd){
    if(toLeft(nd)){
        if(pizq==NULL){
            pizq=new BTnodo;
            pizq->fdata=nd;
        }
        else{
            pizq->insertar(nd);
        }
    }
    else{
        if(pder==NULL){
            pder=new BTnodo;
            pder->fdata=nd;
        }
        else{
            pder->insertar(nd);
        }

    }


}


void BTnodo::preorder(){

  cout<<fdata<<" , ";

if(pizq!=NULL){
    pizq->preorder();


}
if(pder!=NULL){

    pder->preorder();

}


}

void BTnodo::postOrder(){
    if(pizq!=NULL){
    pizq->postOrder();
}

if(pder!=NULL){
    pder->postOrder();
}
cout<<fdata<<", ";

}

void BTnodo::inOrder(){

       if(pizq!=NULL){
    pizq->inOrder();
}

cout<<fdata<<", ";

if(pder!=NULL){
    pder->inOrder();
}

}



