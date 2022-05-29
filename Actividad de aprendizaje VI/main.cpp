#include <iostream>
#include <random>
#include <chrono>
#include <functional>
#include "menu.h"

#include "lista.h"


using namespace std;

int main()
{
    List myLista;
    Menu mymenu;

    Cancion mySong[50];
    string myStr;
    int opcMenu,i,numeroCanciones,rankingCancion,cancionEliminar,pos;
    string codigoBuscado;



    do {
        mymenu.menu();
        cin>>opcMenu;

        switch(opcMenu){
        case 1:
                cout<<"Cuantas canciones quieres llenar ? ";
                cin>>numeroCanciones;getchar();
                for(i=0;i<numeroCanciones;i++) {

                cout << "Nombre de cancion con el ranking no.  "<<i+1<<" ";
                getline(cin, myStr);
                mySong[i].setnombreCancion(myStr);

                cout << "Nombre de cantante: ";
                getline(cin, myStr);
                mySong[i].setnombreAutor(myStr);


                mySong[i].setrankingCancion(i+1);



                myLista.InsertData(myLista.getLastpos(),mySong[i]);
                }

                cout << "Contenido de la lista... " << endl<<endl;
                cout << myLista.toString();
        break;
        case 2: cout << "Contenido de la lista... " << endl<<endl;
                cout << myLista.toString();
        break;
        case 3:
                    cout<<"Dame el ranking a actualizar " <<endl;
                    cin>> rankingCancion;
                for(i=0;i<rankingCancion;i++){

                    if(rankingCancion==mySong[i].getrankingCancion()){
                        cout<<" Actualizando existencia de  " << mySong[i].getrankingCancion() <<endl<<endl;
                        cout<< " Cual es su ranking actual ";
                        getchar();getline(cin,myStr);
                        mySong[i].setrankingCancion(stoi(myStr));
                        myLista.InsertData(myLista.getLastpos(),mySong[i]);
                        myLista.deleteData(rankingCancion-1);

                        cout<<"presione entrar para salir... " << endl;
                        getchar();

                    }
                    else{
                        getchar();
                        cout<<"El producto no existe, presione entrar para salir... " << endl;
                        getchar();


                    }
                }

        break;
        case 4:
                cout<<"Que  ranking de cancion quieres eliminar ";
                cin>>cancionEliminar;

                if(cancionEliminar==mySong[i].getrankingCancion()){

                    cout<<"No se ha encontrado la cancion"<< endl;
                }
                else{

                     myLista.deleteData(cancionEliminar-1);
                    cout<<"Cancion eliminada ...."<< endl;
                     getchar();
                        cout<<" presione entrar para salir... " << endl;
                        getchar();
                }

                break;
        case 5:cout<< "Nombre de cancion a buscar ";
                getchar();getline(cin,myStr);


                mySong[i].setnombreCancion(myStr);

            pos=myLista.findDatalinear(mySong[i]);
        if(pos==-1){

            cout<<"no se encuentra en la lista"<<endl;

        }
        else {

            cout<<"Se encuentra en la posicion "<< pos +1 <<endl;
            cout<<myLista.retrieve(myLista.findDatalinear(mySong[i])).toString()<<endl;

        }

        break;
        case 6: cout<< "Nombre de cancion a buscar ";
                getchar();getline(cin,myStr);


                mySong[i].setnombreCancion(myStr);

            pos=myLista.findDatabinary(mySong[i]);
        if(pos==-1){

            cout<<"no se encuentra en la lista"<<endl;

        }
        else {

            cout<<"Se encuentra en la posicion "<< pos +1 <<endl;
            cout<<myLista.retrieve(myLista.findDatabinary(mySong[i])).toString()<<endl;

        }
        break;
        case 7: mymenu.menuOrdenaCancion();
                cin>>opcMenu;
                switch(opcMenu){
                case 1: cout<<"ordenando por burbuja..."<<endl<<endl;
                        myLista.sortDataBubble();
                        cout <<myLista.toString();
                break;
                case 2: cout<<"ordenando por shell..."<<endl<<endl;
                        myLista.sortDataShell();
                        cout <<myLista.toString();
                break;
                case 3: cout<< "Ordenando por insersion..."<<endl<<endl;
                        myLista.sortDataInsert();
                        cout <<myLista.toString();
                break;
                case 4: cout<<"Ordenando por seleccion..."<<endl<<endl;
                        myLista.sortDataSelect();
                        cout <<myLista.toString();
                break;
                default: cout<<"Tenias que elegir entre 1 y 4";
                }


        break;
        case 8: mymenu.menuOrdenaAutor();
                cin>>opcMenu;
                switch(opcMenu){
                case 1: cout<<"ordenando por burbuja..."<<endl<<endl;
                        myLista.sortDataBubbleAuthor();
                        cout <<myLista.toString();
                break;
                case 2: cout<<"ordenando por shell..."<<endl<<endl;
                        myLista.sortDataShellAuthor();
                        cout <<myLista.toString();
                break;
                case 3: cout<<"Ordenando por insercion..."<<endl<<endl;
                        myLista.sortDataInsertAuthor();
                        cout <<myLista.toString();
                break;
                case 4: cout<<"Ordenando por seleccion..."<<endl<<endl;
                        myLista.sortDataSelectAuthor();
                        cout <<myLista.toString();
                break;
                default: cout<<"Tenias que elegir entre 1 y 4 ";
                }

        break;
        case 9: opcMenu=9;
        break;
        default: cout<< " Elige una opcion valida "<<endl;
            break;


        }

    }

    while(opcMenu!=9);

    return 0;
}
