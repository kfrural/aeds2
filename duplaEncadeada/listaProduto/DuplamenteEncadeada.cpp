#include "DuplamenteEncadeada.h"

DuplamenteEncadeada::DuplamenteEncadeada(){
    quant = 0;
    head = NULL;
}
DuplamenteEncadeada::~DuplamenteEncadeada() {
    //será chamado quando o objeto for destruido
}


void DuplamenteEncadeada::setQuant(int quant){
    this-> quant = quant;
}
int DuplamenteEncadeada::getQuant(){
    return quant;
}

bool DuplamenteEncadeada::isEmpty(){
    if(quant == 0)
        return true;
    else
        return false;
}

void DuplamenteEncadeada::preencher(){
    int q = 0;
    do{
        cout << "Quantidade de elementos: ";
        cin >> q;
    }while(q < 0);
    for(int i = 0; i <= q-1; i++){
        this->insert();
    }
}

void DuplamenteEncadeada::imprimir(){
    cout << "Lista [ ";
    if(!isEmpty()){
        Nodo* p = head;
        while(p != NULL){
            p->getItem().imprimirLista();
            p = p->getProx();
        }
    }
    cout <<"]\n\n";
}

void DuplamenteEncadeada::insert(){
    Produto p;
    p.preencher();
    Nodo* novo = new Nodo(p);
    
    if(quant ==0)
        head = novo;
    else{
        novo->setProx(head);
        head->setAnt(novo);
        head = novo;
    }
    quant++;
}

void DuplamenteEncadeada::insert(int n){
    if(n >= 1 && n <= quant +1){
        Produto p;
        p.preencher();
        Nodo* novo = new Nodo(p);
        novo-> setItem(p);
        
        if(n ==1){
            insert();
        }else if(n == quant +1){
            Nodo* ultimo = this->getElemento(n-1);
            novo->setProx(NULL);
            novo->setAnt(ultimo);
            ultimo->setProx(novo);
        }else{
            Nodo* elemento = this->getElemento(n);
            Nodo* anterior = elemento->getAnt();
            novo->setProx(elemento);
            novo->setAnt(anterior);
            anterior->setProx(novo);
            elemento->setAnt(novo);
        }
        quant++;
    }else{
        cout <<"Operacao invalida\n";
    }
}

void DuplamenteEncadeada::remover(){
    if(quant > 0){
        if(quant == 1){
            head = head->getProx();
        }else{
            head = head->getProx();
            head->setAnt(NULL);
        }
        quant--;
    }else{
        cout << "Operacao invalida\n";
    }
}

void DuplamenteEncadeada::remover(int posicao){
    if(posicao >= 1 && posicao <= quant){
        if(posicao == 1){
            remover();
        }else if(posicao == quant){
            Nodo* elemento = this->getElemento(posicao);
            Nodo* anterior = elemento->getAnt();
            anterior-> setProx(NULL);
            elemento-> setAnt(NULL);
            quant--;
        }else{
            Nodo* elemento = this->getElemento(posicao);
            Nodo* anterior = elemento->getAnt();
            Nodo* posterior = elemento->getProx();
            anterior->setProx(posterior);
            posterior->setAnt(anterior);
            elemento->setAnt(NULL);
            elemento->setProx(NULL);
            quant--;
        }
    }else{
        cout << "Operacao invalida\n";
    }
}

Nodo *DuplamenteEncadeada::buscar(int idProduto){
    for(Nodo* p = head; p != NULL; p = p->getProx()){
        if(p->getItem().getId() == idProduto)
            return p;
    }
    return NULL;
}

Nodo *DuplamenteEncadeada::getElemento(int n){
    Nodo *p = head;
    int i = 1;
    while(i <= n -1 && p->getProx() != NULL){
        p = p->getProx();
        i++;
    }
    if(i == n)
        return p;
    else
        return NULL;
}
