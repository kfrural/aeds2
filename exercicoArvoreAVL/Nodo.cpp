
#include "Nodo.h"

Nodo::Nodo() {    
    this->pai = NULL;
    this->esq = NULL;
    this->dir = NULL;   
   // this->item = NULL;
    this->fator = 1;
}

Nodo::Nodo(Produto& p){
    this->pai = NULL;
    this->esq = NULL;
    this->item.copiar(p);
    this->dir = NULL;
    this->fator = 1;
}


Nodo::Nodo(const Nodo& outro) {
    this->pai = outro.getPai();
    this->item = outro.getItem();
    this->esq = outro.getEsq();
    this->dir = outro.getDir();
    this->fator = outro.getFator();
            
}

Nodo::~Nodo() {
    
}

int Nodo::getNumeroFilhos(){
    if(dir == NULL && esq == NULL)
        return 0;
    else if((dir == NULL && esq != NULL) ||(dir != NULL && esq == NULL))
        return 1;
    else
        return 2;                      
}

/**
 * Deve ser chamada quando sabemos que o no tem um filho apenas <br>
 * Quando tem mais de um filho ou nenhum, retorna NULL
 *
 * @return O unico filho 
 */
Nodo* Nodo::getFilhoUnico(){
    if(this->getNumeroFilhos() == 1){
        if(this->esq != NULL)
            return this->esq;
        else
            return this->dir;
    }else{
        return NULL;
    }
}

void Nodo::setFator(int fator) {
    this->fator = fator;
}

int Nodo::getFator() const {
    return fator;
}

void Nodo::setDir(Nodo* dir) {
    if(this!= NULL)
        this->dir = dir;
}

Nodo* Nodo::getDir() const {
    return dir;
}

void Nodo::setItem(Produto item) {
    this->item = item;
}

Produto Nodo::getItem() const {
    return item;
}

void Nodo::setEsq(Nodo* esq) {
    this->esq = esq;
}

Nodo* Nodo::getEsq() const {
    return esq;
}

void Nodo::setPai(Nodo* pai) {
    this->pai = pai;
}

Nodo* Nodo::getPai() const {
    return pai;
}

/**
 * GETTERS e SETTERS
 */



