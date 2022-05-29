#include "sortbyAuthor.h"
#include <string>
#include <iostream>



using namespace std;


Author& Author::operator=(const Cancion& p){

nombreCancion=p.nombreCancion;
nombreAutor=p.nombreAutor;

rankingCancion=p.rankingCancion;

return *this;
}


bool Author::operator ==(const Cancion& p) const{
return nombreAutor == p.nombreAutor;
}

bool Author::operator!=(const Cancion& p) const{
return nombreAutor != p.nombreAutor;
}

bool Author::operator>(const Cancion& p) const{
return nombreAutor > p.nombreAutor;
}

bool Author::operator>=(const Cancion& p) const{
return nombreAutor >= p.nombreAutor;
}

bool Author::operator<(const Cancion& p) const{
return nombreAutor < p.nombreAutor;
}

bool Author::operator<=(const Cancion& p) const{
return nombreAutor <= p.nombreAutor;
}






ostream& operator << (ostream& os,Author& p){
os<<p.nombreCancion<<endl;
os<<p.nombreAutor<<endl;
os<<p.rankingCancion<<endl;

return os;
}

istream& operator >> (istream& is, Author& p){
    string myStr;

    getline(is, p.nombreCancion);
    getline(is, p.nombreAutor);
    p.rankingCancion=stoi(myStr);


     return is;
}



