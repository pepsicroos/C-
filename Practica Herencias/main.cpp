#include <iostream>
#include "CAuto.h"
#include "CPatrulla.h"
#include "CToretto.h"
#include "CTaxi.h"
#include "CBlindada.h"
#include "Menu.h"

using namespace std;

int main()
{
    int opcMenu;
    int velocidad;
    bool respuesta;
    Menu mymenu;
    do{
    mymenu.MenuPrincipal();
    cout<<"Selecciona una opcion del menu"<<endl;
    cin>>opcMenu;
    switch(opcMenu){
    case 1:{
            int opcSubmenu;
            CAuto autto;
            do{
            mymenu.subMenu();
            cin>>opcSubmenu;
            switch(opcSubmenu){
                case 1:
                        cout<<"Cual es la velocidad del auto"<<endl;
                        cin>>velocidad;
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<autto.acelerar(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
                break;
                case 2:autto.imprimirDatosAuto();
                break;
                case 3: opcSubmenu=3;
                break;
                default:cout<<"Selecciona una opcion valida";
                        }
                    }
                while(opcSubmenu!=3);

    }
    break;
    case 2:{
             CPatrulla patrulla;
             int opcSubmenu=0;
             do{
                mymenu.subMenu();
                cin>>opcSubmenu;
                switch(opcSubmenu){
                case 1:cout<<"Cual es la velocidad de la patrulla"<<endl;
                        cin>>velocidad;
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<patrulla.acelerarPatrulla(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
                break;
                case 2: patrulla.imprimirDatosPatrulla();
                break;
                case 3:opcSubmenu=3;
                break;
                default:cout<<"Selecciona una opcion valida";
                }
             }
             while(opcSubmenu!=3);
            }
    break;
    case 3:{
            CBlindada blindada;
            int opcSubmenu=0;
            do{
               mymenu.subMenuBlindada();
               cin>>opcSubmenu;
                switch(opcSubmenu){
                case 1:cout<<"Cual es la velocidad de Toretto"<<endl;
                        cin>>velocidad;
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<blindada.acelerarBlindada(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
                break;
                case 2:cout << "Quieres Blindarla ? 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<blindada.AgregaBlindaje()<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo  el mismo"<<endl;

                        }
                break;
                case 3:blindada.imprimirDatosBlindada();
                break;
                case 4:opcSubmenu=4;
                break;
                default:cout<<"Selecciona una opcion valida";
                }
            }
            while(opcSubmenu!=4);



           }
    break;
    case 4:{
            CToretto toretto;
            int opcSubmenu=0;
            do{
               mymenu.subMenuToretto();
               cin>>opcSubmenu;
                switch(opcSubmenu){
                case 1:cout<<"Cual es la velocidad de Toretto"<<endl;
                        cin>>velocidad;
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<toretto.AcelerarToretto(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
                break;
                case 2:cout << "Quieres accionar el turbo 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<toretto.turbo()<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
                break;
                case 3:toretto.imprimirDatosToretto();
                break;
                case 4:opcSubmenu=4;
                break;
                default:cout<<"Selecciona una opcion valida";
                }
            }
            while(opcSubmenu!=4);
           }
    break;
    case 5: {
             int opcSubmenu;
             CTaxi taxi;
             do{
            mymenu.subMenu();
            cin>>opcSubmenu;
            switch(opcSubmenu){
                case 1:
                        cout<<"Cual es la velocidad del auto"<<endl;
                        cin>>velocidad;
                        cout << "Quieres acelerar 1.- SI      0.-No" << endl;
                        cin>>respuesta;
                        if(respuesta){
                            cout<<"Ahora vas a "<<taxi.acelerarTaxi(velocidad)<<" Km/hr"<<endl;

                        }
                        else{
                            cout<<"Tu velocidad sigue siendo "<<velocidad<<" Km/hr"<<endl;

                        }
                        break;
                        case 2:taxi.imprimirDatosTaxi();
                        break;
                        case 3: opcSubmenu=3;
                        break;
                        default:cout<<"Selecciona una opcion valida";
                                }
                            }
                        while(opcSubmenu!=3);
            }
    break;
    case 6: opcMenu=6;
    break;
    default: cout<<"Selecciona una opcion valida"<<endl;
    }
    }
    while(opcMenu!=6);



    return 0;
}
