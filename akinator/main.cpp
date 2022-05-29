#include<iostream>
#include<conio.h>
#include <fstream>
#include "Arbol.h"

using namespace std;


int main(){
    int opcmenu;
    Arbol arbol;
    ofstream salida;
    ifstream entrada;
    ifstream resp;
    char nomres[]="Animales.txt";


    do{
        cout<<"1.- Entrenar akinator(crear arbol)"<<endl;
        cout<<"2.- Guardar "<<endl;
        cout<<"3.- Cargar "<<endl;
        cout<<"4.- Salir "<<endl;
        cout<<"Selecciona una opcion "<<endl;
        cin>>opcmenu;
        switch(opcmenu){
            case 1: getchar();arbol.EntrenaNodo();
            break;
            case 2: salida.open("arbol.txt", ios::app);
                    arbol.Guardar(arbol.regresaRaiz(),salida);
                    salida.close();
            break;
            case 3:resp.open(nomres);
                    entrada.open("arbol.txt");
                    arbol.cargar(arbol.regresaRaiz(),entrada,resp);
            break;
            case 4:
            break;
        }
    }
    while(opcmenu!=4);


	return 0;
}




