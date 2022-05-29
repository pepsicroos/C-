#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>

using namespace std;


class Menu {

public:
    void menu();
    void menuOrdenaCancion();
    void menuOrdenaAutor();



};

void Menu::menu(){

        cout << "1.- Llenar canciones " << endl;
        cout << "2.- Mostrar lista canciones " << endl;
        cout << "3.- Actualizar cancion " << endl;
        cout << "4.- Eliminar cancion " << endl;
        cout << "5.- Busqueda lineal " << endl;
        cout << "6.- Busqueda binaria " << endl;
        cout << "7.- Ordenar por nombre de cancion " << endl;
        cout << "8.- Ordenar por nombre de autor " << endl;
        cout << "9.- Salir " << endl;


}

void Menu::menuOrdenaAutor(){

        cout << "1.- Ordenar por burbuja (mejorada) " << endl;
        cout << "2.- Ordenar por shell " << endl;
        cout << "3.- Ordenar por inserción " << endl;
        cout << "4.- Ordenar por seleccion " << endl;
        cout << "5.- Salir " << endl;


}

void Menu::menuOrdenaCancion(){

        cout << "1.- Ordenar por burbuja (mejorada) " << endl;
        cout << "2.- Ordenar por shell " << endl;
        cout << "3.- Ordenar por inserción " << endl;
        cout << "4.- Ordenar por seleccion" << endl;
        cout << "5.- Salir " << endl;


}


#endif // MENU_H_INCLUDED
