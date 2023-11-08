
#ifndef NODO_H
#define	NODO_H

#include "Produto.h"

class Nodo {
private:
    Nodo *pai;
    Nodo *esq;
    Produto item;
    Nodo* dir;
    int fator;

public:
    Nodo();
    Nodo(Produto &p);
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    void setDir(Nodo* dir);
    Nodo* getDir() const;
    void setItem(Produto item);
    Produto getItem() const;
    void setEsq(Nodo* esq);
    Nodo* getEsq() const;
    void setPai(Nodo* pai);
    Nodo* getPai() const;
    
    Nodo* getFilhoUnico();
    int getNumeroFilhos();
    void setFator(int fator);
    int getFator() const;
    
    
    
    

};

#endif	/* NODO_H */

