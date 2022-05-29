#include <iostream>
#include "BTnodo.h"
#include "Carbol.h"

using namespace std;

int main()
{
    Carbol arbol;

    arbol.insertarArbol(5);//1
    arbol.insertarArbol(7);//2
    arbol.insertarArbol(8);//3
    arbol.insertarArbol(6);//4
    arbol.insertarArbol(3);//5
    arbol.insertarArbol(4);//6
    arbol.insertarArbol(2);//7
    arbol.insertarArbol(1);//8
    arbol.insertarArbol(0);//9
    arbol.insertarArbol(10);//10
    arbol.insertarArbol(12);//11
    arbol.insertarArbol(9);//12
    arbol.insertarArbol(6);//13
    arbol.insertarArbol(13);//14
    arbol.insertarArbol(2);//15
    arbol.insertarArbol(4);//16
    arbol.insertarArbol(6);//17
    arbol.insertarArbol(8);//18
    arbol.insertarArbol(10);//19
    arbol.insertarArbol(12);//20
    cout<<"Datos iniciales de arbol... ";
    cout<<endl;
    cout<<"preorder: ";
    arbol.preorderArbol();
    cout<<endl;
    cout<<"Inorder: ";
    arbol.inOrder();
    cout<<endl;
    cout<<"posorder: ";
    arbol.postOrder();

    cout<<endl;
    cout<<"eliminacion 12... ";
    arbol.Eliminar(12);
    cout<<endl;
    cout<<"preorder: ";
    arbol.preorderArbol();
    cout<<endl;
    cout<<"Inorder: ";
    arbol.inOrder();
    cout<<endl;
    cout<<"posorder: ";
    arbol.postOrder();
    cout<<endl;
    cout<<endl;
    cout<<"eliminacion 10... ";
    arbol.Eliminar(10);
    cout<<endl;
    cout<<"preorder: ";
    arbol.preorderArbol();
    cout<<endl;
    cout<<"Inorder: ";
    arbol.inOrder();
    cout<<endl;
    cout<<"posorder: ";
    arbol.postOrder();
    cout<<endl;




    cout<<endl;

    return 0;
}
