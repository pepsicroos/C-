#include <iostream>
#include "CLista.h"
#include "CNodo.h"
#include "CAuto.h"
#include "menu.h"
#include "CPatrulla.h"
#include "CTaxi.h"
#include "CToretto.h"
#include "CBlindada.h"

using namespace std;

int main()
{

    Menu mymenu;
    CLista mylista;
    int opcmenu=0;

    do{
        mymenu.MenuPrincipal();
        cout<<"Selecciona una opcion del menu ";
        cin>>opcmenu;
        switch(opcmenu){
        case 1: {
                CAuto *pauto=new CAuto;
                pauto->CreaAuto();
                mylista.InsertarInicio(pauto);

                }
        break;
        case 2:{
                CPatrulla *pauto=new CPatrulla;
                pauto->creaPatrulla();
                mylista.InsertarInicio(pauto);
               }
        break;
        case 3:{
                CBlindada *pauto= new CBlindada;
                pauto->creaBlindada();
                mylista.InsertarInicio(pauto);
               }
        break;
        case 4:{
                CToretto *pauto= new CToretto;
                pauto->CreaToretto();
                mylista.InsertarInicio(pauto);
               }
        break;
        case 5:{
                CTaxi *pauto= new CTaxi;
                pauto->creaTaxi();
                mylista.InsertarInicio(pauto);
               }
        break;
        case 6: mylista.ImprimeTodo();
        break;
        case 7:opcmenu=7;
        break;
        default:
        break;
        }
    }
    while(opcmenu!=7);




    return 0;
}
