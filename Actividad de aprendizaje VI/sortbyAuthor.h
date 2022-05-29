#ifndef SORTBYAUTHOR_H_INCLUDED
#define SORTBYAUTHOR_H_INCLUDED
#include "cancion.h"


class Author {

private:
    std::string nombreCancion;
    std::string nombreAutor;

    int rankingCancion;


public:


    Author& operator =(const Cancion&);

    bool operator == (const Cancion&) const;
    bool operator != (const Cancion&) const;
    bool operator < (const Cancion&) const;
    bool operator <= (const Cancion&) const;
    bool operator > (const Cancion&) const;
    bool operator >= (const Cancion&) const;



    friend std::ostream& operator << (std::ostream&,Author&);
    friend std::istream& operator >> (std::istream&,Author&);

};





#endif // SORTBYAUTHOR_H_INCLUDED
