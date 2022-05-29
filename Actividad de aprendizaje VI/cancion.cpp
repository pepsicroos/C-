#include "cancion.h"
#include <string>
#include <iostream>
#include <cstring>


using namespace std;

Cancion::Cancion(){}
Cancion::Cancion(const Cancion& p):nombreCancion(p.nombreCancion),nombreAutor(p.nombreCancion), rankingCancion(p.rankingCancion) {}



string Cancion::getnombreCancion() {
return nombreCancion;
}

string Cancion::getnombreAutor() {
return nombreAutor;
}


int Cancion::getrankingCancion() {
return rankingCancion;
}

string Cancion::toString() const {
    string result;

    result=nombreCancion;
    result+=" | ";
    result+=nombreAutor;
    result+=" | ";
    result+=to_string(rankingCancion);

    return result;
}

void Cancion::setnombreCancion(const string&  c){
nombreCancion=c;
}

void Cancion::setnombreAutor(const string& a){
nombreAutor=a;
}

void Cancion::setrankingCancion(const int& e){
rankingCancion=e;
}



bool Cancion::operator == (string& c) {
	return nombreCancion == c;
}
bool Cancion::operator < (Cancion& c) {
	return nombreCancion < c.nombreCancion;
}
bool Cancion::operator>(Cancion& c) {
	return nombreCancion > c.nombreCancion;
}








ostream& operator << (ostream& os,Cancion& p){
os<<p.nombreCancion<<endl;
os<<p.nombreAutor<<endl;
os<<p.rankingCancion<<endl;

return os;
}

istream& operator >> (istream& is, Cancion& p){
    string myStr;

    getline(is, p.nombreCancion);
    getline(is, p.nombreAutor);
    p.rankingCancion=stoi(myStr);


     return is;
}



