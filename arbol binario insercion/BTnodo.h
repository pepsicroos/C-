#ifndef BTNODO_H_INCLUDED
#define BTNODO_H_INCLUDED

class BTnodo{

private:
    float fdata;
    BTnodo *pizq;
    BTnodo *pder;
    void insertar(float nd);
    bool toLeft(float nd);
    bool toRight(float nd);
    void inOrder();
    void preorder();
    void postOrder();
    BTnodo();

    friend class Carbol;

};

#endif // BTNODO_H_INCLUDED
