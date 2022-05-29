#ifndef CANCION_H_INCLUDED
#define CANCION_H_INCLUDED

#include <iostream>
#include <string>
#include <cstring>

using namespace std;



class Cancion {

private:
    string nombreCancion;
    string nombreAutor;

    int rankingCancion;

    friend class Author;

public:

    Cancion();
    Cancion(const Cancion&);

    string getnombreCancion() ;

    string getnombreAutor() ;

    int getrankingCancion();




    string toString() const;


    void setnombreCancion(const string&);
    void setnombreAutor(const string&);


    void setrankingCancion(const int&);

    bool operator == (string&);
	bool operator < (Cancion&);
	bool operator > (Cancion&);



    friend std::ostream& operator << (std::ostream&,Cancion&);
    friend std::istream& operator >> (std::istream&,Cancion&);

};



#endif // CANCION_H_INCLUDED
