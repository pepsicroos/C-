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

BTnodo* Carbol::BuscarMalPadre(float nd){

    BTnodo *aux=pRaiz;
    while(aux!=NULL){
            if(aux->pizq==NULL){
               return NULL;
            }

        if(aux->toLeft(nd)){
            if(aux->pizq->fdata==nd){
                return aux;
            }
            else{
                aux=aux->pizq;
            }
        }
        else{
                if(aux->pder==NULL){
               return NULL;
            }
            if(aux->pder->fdata==nd){
                return aux;
            }
            else{
                aux=aux->pder;
            }
        }
    }

return NULL;
}

 BTnodo* Carbol::ExtremaRight(BTnodo* paqui){
     BTnodo *aux=pRaiz;

    while(aux!=NULL){
     if(aux->pder==paqui){
     return aux->pder;
     }
     else{
         aux=aux->pder;
     }
    }


return NULL;

 }

 BTnodo* Carbol::dameUnicoHijo(BTnodo* padre){
     BTnodo *aux=pRaiz;
     if(aux->pder==NULL &&aux->pizq!=NULL){
            if(aux->pizq==padre){
                return aux->pizq;
            }
            if(aux->pder==padre){
                return aux->pder;
            }

     }
      else{
            if(aux->pizq==padre){
                return aux->pizq;
            }
            if(aux->pder==padre){
                return aux->pder;
            }

      }
    return NULL;
 }

 int Carbol::CantidadHijos(BTnodo *padre){
     int cantidad=0;
     BTnodo *aux=pRaiz;
     if(aux==padre){
        if(aux->pder!=NULL){
        cantidad++;
     }
     if(aux->pizq!=NULL){
        cantidad++;
     }
     }

     return cantidad;

 }



void Carbol::Eliminar(float nd){

if(pRaiz->fdata==nd){
    BTnodo *pnuevo=pRaiz->pizq;
    BTnodo *pExtension=pRaiz->pder;
    BTnodo *pExtremo;
    delete pRaiz;
    pRaiz=pnuevo;
    pExtremo=ExtremaRight(pRaiz);
    pExtremo->pder=pExtension;
}
else{
    BTnodo *malpadre=BuscarMalPadre(nd);
    if(malpadre==NULL){
        return;
    }
    if(malpadre->toLeft(nd)){
        int CantidadHijo;
        CantidadHijo=CantidadHijos(malpadre->pizq);
        switch(CantidadHijo){
        case 0:{delete malpadre->pizq;
                malpadre->pizq=NULL;
               }
        break;
        case 1:{
                BTnodo *UnicoHijo= dameUnicoHijo(malpadre->pizq);
                delete malpadre->pizq;
                malpadre->pizq=UnicoHijo;
               }
        break;
        case 2:{
                BTnodo *nietoDerecha=malpadre->pizq->pder;
                BTnodo *nietoIzquierdo=malpadre->pizq->pizq;
                delete malpadre->pizq;
                malpadre->pizq=nietoIzquierdo;
                ExtremaRight(nietoIzquierdo)->pder=nietoDerecha;

               }
        break;

        }
    }
    else{
            int CantidadHijo;
        CantidadHijo=CantidadHijos(malpadre->pder);
        switch(CantidadHijo){
        case 0:{delete malpadre->pder;
                malpadre->pder=NULL;
               }
        break;
        case 1:{
                BTnodo *UnicoHijo= dameUnicoHijo(malpadre->pder);
                delete malpadre->pder;
                malpadre->pder=UnicoHijo;
               }
        break;
        case 2:{
                BTnodo *nietoDerecha=malpadre->pder->pizq;
                BTnodo *nietoIzquierdo=malpadre->pder->pder;
                delete malpadre->pder;
                malpadre->pder=nietoDerecha;
                ExtremaRight(nietoDerecha)->pizq=nietoIzquierdo;

               }
        break;

        }















    }

}


}
