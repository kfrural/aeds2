#include "Nodo.h"

Nodo::Nodo(){
    ant = NULL;
    prox = NULL;
}
Nodo::Nodo(Produto &p){
    item.copiar(p);
    ant = NULL;
    prox = NULL;
}
Nodo::Nodo(Nodo &outro){
    item.copiar(outro.getItem());
    ant = outro.getAnt();
    prox = outro.getProx();
}

void Nodo::setItem(Produto &p){
    this-> item = item;
}
void Nodo::setAnt(Nodo* ant){
    this-> ant = ant;
}
void Nodo::setProx(Nodo* prox){
    this-> prox = prox;
}

Produto Nodo::getItem(){
    return item;
}
Nodo* Nodo::getAnt(){
    return ant;
}
Nodo* Nodo::getProx(){
    return prox;
}
