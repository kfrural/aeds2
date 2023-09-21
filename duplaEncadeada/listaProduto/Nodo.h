#include "Produto.h"

class Nodo{
    private:
        Produto item;
        Nodo* ant;
        Nodo* prox;
        
    public:
        Nodo();
        Nodo(Produto &p);
        Nodo(Nodo &outro);
        
        void setItem(Produto item);
        void setAnt(Nodo* ant);
        void setProx(Nodo* prox);
        
        Produto getItem();
        Nodo* getAnt();
        Nodo* getProx();
};
