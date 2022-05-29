#include "lista.h"
#include <string>
#include <string.h>

using namespace std;

void List::copyAll(const List& l){
int i=0;
while(i<=l.last){
data[i]=l.data[i];
i++;
}

last=l.last;
}

bool List::isValidPos(const int& p){
return p>=0 and p<=last;
}

List::List() : last(-1) {}

List::List(const List& l){
copyAll(l);
}

void List::swapData(Cancion& a, Cancion& b){
    Cancion aux=a;
    a=b;
    b=aux;

}


bool List::isEmpty(){
return last==-1;
}

bool List::isFull(){
return last==499;
}

void List::InsertData(const int& p, const Cancion& e){

if(isFull()){
    throw ListException("Desbordamiento de datos, inserteDatos");
}

if(p != -1 and !isValidPos(p)) {
    throw ListException("Posicion invalida, insertData");
}

int i(last);
while(i>p){
    data[i+1]=data[i];

    i--;
}
*data[p+1]= e;
last++;

}

void List::deleteData(const int& p){
    if(!isValidPos(p)){
        throw ListException("Posicion invalida, deleteData");
        return;
    }

    int i(p);
    while(i<last){
        data[i]=data[i+1];
        i++;
    }
    last--;
}

int List::getFirstpos(){
    if(isEmpty()){
        return -1;
    }
    return 0;
}

int List::getLastpos(){
return last;
}

int  List::getPrevpos(const int& p){
    if(p==getFirstpos() or !isValidPos(p)){
    return -1;
    }
    return p-1;

}

int List::getNextpos(const int& p){
if(p==getLastpos() or !isValidPos(p)){
    return -1;
}
return p+1;
}

int List::findDatalinear(string e){
    int i=0;
    while(i<=last){
        if(*data[i]==e){
            return i;
        }
        i++;
    }
    return -1;
}

int List::findDatabinary(string e){

    int i=0,j=last, m;

    while(i<=j){
        m=(i+j)/2;
        if(*data[m]==e){
            return m;
        }
        if(e < data[m]->getnombreCancion){
            j=m-1;
        }
        else{
            i=m+1;
        }

    }
    return -1;

}


void List::sortDataBubble(){
int i=last;
bool flag;

do{
    flag=false;
     int j=0;

     while(j<i){
        if(data[j]>data[j+1]){
                swapData(*data[j], *data[j+1]);
        flag=true;
        }
        j++;
     }
    i--;
}
while(flag);
}


void List::sortDataShell(){
    float factor(1.0/2.0);
    int dif((last+1)*factor),i,j;

    while(dif>0){
        i=dif;

        while(i<=last){
            j=i;
            while(j>=dif and data[j-dif]>data[j]){
                swapData(*data[j-dif],*data[j]);
                j-=dif;
            }
            i++;
        }
        dif*=factor;
    }
}


void List::sortDataInsert(){

int i=1,j;
Cancion aux;

while(i<=last){
    aux=*data[i];
    j=i;

    while(j>0 and aux<*data[j-1]){
        data[j]=data[j-1];
        j--;
    }
    if(i !=j){
    *data[j]=aux;
    }
    i++;

}
}
void List::sortDataSelect(){

    int i=0,j,m;

    while(i< last){
        m=i;
        j=i+1;

        while(j<=last){
        if(data[j]<data[m]){
            m=j;
        }
        j++;
    }
    if(i != m){
        swapData(*data[i], *data[m]);
    }
    i++;
    }
}


void List::sortDataBubbleAuthor(){

int i=last;
bool flag;


do{
    flag=false;
     int j(0);

     while(j<i){
        if(data[j]->getnombreAutor() > data[j+1]->getnombreAutor()){
                swapData(*data[j], *data[j+1]);
        flag=true;
        }
        j++;
     }
    i--;
}while(flag);

}


void List::sortDataShellAuthor(){
    float factor(1.0/2.0);
    int dif((last+1)*factor),i,j;

    while(dif>0){
        i=dif;

        while(i<=last){
            j=i;
            while(j>=dif and data[j-dif]->getnombreAutor()>data[j]->getnombreAutor()){
                swapData(*data[j-dif],*data[j]);
                j-=dif;
            }
            i++;
        }
        dif*=factor;
    }


}


void List::sortDataInsertAuthor(){

int i=1,j;
Cancion aux;

while(i<=last){
    aux=*data[i];
    j=i;

    while(j>0 && aux<*data[j-1]){
        data[j]->getnombreAutor()=data[j-1]->getnombreAutor();
        j--;
    }
    if(i !=j){
    *data[j]=aux;
    }
    i++;

}
    }



void List::sortDataSelectAuthor(){

    int i=0,j,m;

    while(i< last){
        m=i;
        j=i+1;

        while(j<=last){
        if(data[j]->getnombreAutor()<data[m]->getnombreAutor()){
            m=j;
        }
        j++;
    }
    if(i != m){
        swapData(*data[i], *data[m]);
    }
    i++;
    }


}


Cancion List::retrieve(const int& p){
if(!isValidPos(p)){
    throw ListException("Posicion invalida, retrieve");
}
return *data[p];

}

string List::toString(){
    string result;
    int i(0);
    while(i<=last){
        result+= data[i]->toString()+ "\n";
        i++;
    }
    result+="\n";

    return result;

}

    void List::print(){
    int i(0);


    while(i <=last){
        cout << data[i++] << ", ";
    }
    cout<<endl;

}

void List::deleteAll(){
    last= -1;
}



List& List::operator=(const List& l){
copyAll(l);

return *this;
}








