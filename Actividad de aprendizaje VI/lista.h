#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED


#include <cstdlib>
#include <string>
#include <iostream>
#include "cancion.h"
#include "sortbyAuthor.h"
#include "listexception.h"


class List {

private:
    Cancion *data[50];
    int last;

    bool isValidPos(const int&);

    void copyAll(const List&);
    void swapData(Cancion&, Cancion&);


public:

    List(); //inicializa
    List(const List&);

    bool isEmpty(); //vacio
    bool isFull(); //lleno

    void InsertData(const int&, const Cancion&); //inserta

    void deleteData(const int&); //elimina

    int getFirstpos(); //primero
    int getLastpos(); //ultimo
    int getPrevpos(const int&); //anterior
    int getNextpos(const int&); //siguiente

    int findDatalinear(string);
    int findDatabinary(string);

    void sortDataBubble();
    void sortDataShell();
    void sortDataInsert();
    void sortDataSelect();

    void sortDataBubbleAuthor();
    void sortDataShellAuthor();
    void sortDataInsertAuthor();
    void sortDataSelectAuthor();


    Cancion retrieve(const int&); //recupera

    std::string toString();

    void print();
    void deleteAll(); //anula



    List& operator = (const List&);

};



#endif // LISTA_H_INCLUDED
