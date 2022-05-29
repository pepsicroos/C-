#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

class Menu{


public:
    void MenuPrincipal();
    void subMenu();
    void subMenuToretto();
    void subMenuBlindada();


};


void Menu::MenuPrincipal(){


    cout<<"1.- Auto"<<endl;
    cout<<"2.-Patrulla"<<endl;
    cout<<"3.-Blindada"<<endl;
    cout<<"4.-Toretto"<<endl;
    cout<<"5.-Taxi"<<endl;
    cout<<"6.-Imprimir lista"<<endl;
    cout<<"7.- Salir"<<endl;

}

void Menu::subMenu(){
    cout<<"Salecciona una opcion"<<endl;
    cout<<"1.-Acelerar"<<endl;
    cout<<"2.-Imprimir "<<endl;
    cout<<"3.- Salir"<<endl;

}

void Menu::subMenuToretto(){
    cout<<"Salecciona una opcion"<<endl;
    cout<<"1.-Acelerar"<<endl;
    cout<<"2.-Turbo"<<endl;
    cout<<"3.-Imprimir "<<endl;
    cout<<"4.- Salir"<<endl;
}

void Menu::subMenuBlindada(){
    cout<<"Salecciona una opcion"<<endl;
    cout<<"1.-Acelerar"<<endl;
    cout<<"2.-Blindar"<<endl;
    cout<<"3.-Imprimir "<<endl;
    cout<<"4.- Salir"<<endl;
}


#endif // MENU_H_INCLUDED
