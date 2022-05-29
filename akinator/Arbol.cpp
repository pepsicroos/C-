#include<iostream>
#include<conio.h>
#include <fstream>
#include "Arbol.h"

using namespace std;



Arbol::Arbol(){
iz=NULL;
der=NULL;
}

void Arbol::Guardar(Arbol *raiz, ostream &out){
Arbol *aux=new Arbol();
aux=raiz;


if (aux==NULL) {
    out << "# ";
  } else {
    out << aux->animal << " ";
    Guardar(aux->iz, out);
    Guardar(aux->der, out);


}
}

Arbol* Arbol::regresaRaiz(){
    Arbol *raiz=new Arbol();
return raiz;
}



void Arbol::cargar(Arbol *raiz, ifstream &entrada,ifstream &resp){

    char res;

        if(!entrada.eof())
            {
            entrada>>raiz->animal;
         cout<<raiz->animal;


       if(!entrada.eof())
       {

       resp>>res;

       if(res=='s' || res=='S')
       cargar(raiz->iz,entrada,resp);
       }
       if(!entrada.eof())

       {


       resp>>res;

       if(res=='s' || res=='S')
       cargar(raiz->der,entrada,resp);

       }

    }

}




bool Arbol::si(string preg){
	string resp;
	cout<<preg<<endl;
	getline(cin,resp,'\n');
	return (resp[0]=='s' || resp[0]=='S');
}



void Arbol::EntrenaNodo(){

    bool bucle = true;
	Arbol *raiz = new Arbol();
	string nuevo, info, indicador;
	//cout<<"Entro en el main"<<endl;
	raiz->animal="pajaro";
	//cout<<"Entro despues de raiz "<<endl;
	while(bucle){
		system("cls");
		//cout<<"Entro en bucle 1"<<endl;
		if(!si("Estás pensando en un animal?")){
			break;
		}else{
			Arbol *arbol=raiz;
			while(arbol->iz != NULL){
				//cout<<"Entro en bucle 2"<<endl;
				if(si(arbol->animal+"?")){
					arbol = arbol->iz;
				}else{
					arbol = arbol->der;
				}
			}
			string anim = arbol->animal;
			if(si("Es un "+anim+"?")){
				cout<<"Adivine !"<<endl;
				getchar();
				cout<<"Presiona entrar para salir"<<endl;
				getchar();
				continue;
			}

			cout<<"Que animal era?"<<endl;
			getline(cin,nuevo,'\n');
			cout<<"Que diferencia a un "<< nuevo <<" de un "<<anim<<"?"<<endl;
			getline(cin,info,'\n');
			cout<<"Confirma que usten penso en un "<<nuevo<< " 1.- Si, 0.- No"<<endl;
			getline(cin,indicador,'\n');
			arbol->animal=info;

			if(si(indicador)){
				Arbol *nvo1 = new Arbol();
				nvo1->animal=anim;
				Arbol *nvo2 = new Arbol();
				nvo2->animal=nuevo;
				arbol->iz= nvo1;
				arbol->der= nvo2;
			}else{
				Arbol *nvo1 = new Arbol();
				nvo1->animal=nuevo;
				Arbol *nvo2 = new Arbol();
				nvo2->animal=anim;
				arbol->iz= nvo1;
				arbol->der= nvo2;
			}
		}
	}


}
