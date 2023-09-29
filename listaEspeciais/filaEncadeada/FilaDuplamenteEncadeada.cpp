#include "FilaDuplamenteEncadeada.h"

FilaDuplamenteEncadeada::FilaDuplamenteEncadeada(){
    quant = 0;
    head = NULL;
}

void FilaDuplamenteEncadeada:: setQuant(int quant){
    this->quant = quant;
}
int FilaDuplamenteEncadeada:: getQuant(){
    return quant;
}

void FilaDuplamenteEncadeada:: imprimir(){
    cout << "\tListinha[";
    if(!isEmpty()){
        Nodo* p = head;
        while(p != NULL){
            p->getItem().imprimirLista();
            p = p->getProx();
        }
    }
    cout << "]\n\n\n";
}

 void FilaDuplamenteEncadeada:: preencher(){
    int q = 0;
    do{
        cout << "Quanidade de elementos: ";
        cin >> q;
    }while(q < 0);
    for(int i = 0; i < q; i++){
        this-> insert();
    }
}

void FilaDuplamenteEncadeada:: insert(){
    Produto p;
    p.preencher();
    Nodo* novo = new Nodo(p);
    if(quant == 0){
        head = novo;
    }else{
        Nodo* ultimo = getElemento(quant);
        ultimo -> setProx(novo);
        novo -> setAnt(ultimo);
    }
    quant++;
}

void FilaDuplamenteEncadeada:: remove(){
    if(quant > 0){
        if(quant == 1){
            head = head-> getProx();
        }else{
            head = head->getProx();
            head->setAnt(NULL);
        }
        quant--;
    }else{
        cout << "listinha vazia\n";
    }
}

bool FilaDuplamenteEncadeada:: isEmpty(){
    return quant == 0 ? true : false;
}

Nodo* FilaDuplamenteEncadeada:: getElemento(int posicao){
    Nodo* p = head;
    int j = 1;

    while(j <= posicao-1 && p->getProx() != NULL){
        p = p->getProx();
        j++;
    }
    return (j == posicao) ? p : NULL;
}



