#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED


#include<iostream>
#include<conio.h>
#include <fstream>

using namespace std;



class Arbol{
	public:
		string animal;
		Arbol *iz;
		Arbol *der;
		void Guardar(Arbol *raiz, ostream &out);
		void cargar(Arbol *raiz, ifstream &entrada,ifstream &resp);
        void EntrenaNodo();
        Arbol* regresaRaiz();
        bool si(string preg);

		Arbol();
};

#endif // ARBOL_H_INCLUDED
