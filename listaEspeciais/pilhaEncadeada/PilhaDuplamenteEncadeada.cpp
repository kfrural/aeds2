#include "PilhaDuplamenteEncadeada.h"

PilhaDuplamenteEncadeada::PilhaDuplamenteEncadeada(){
    quant = 0;
    head = NULL;
}

void PilhaDuplamenteEncadeada:: setQuant(int quant){
    this->quant = quant;
}
int PilhaDuplamenteEncadeada:: getQuant(){
    return quant;
}

void PilhaDuplamenteEncadeada:: imprimir(){
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

 void PilhaDuplamenteEncadeada:: preencher(){
    int q = 0;
    do{
        cout << "Quanidade de elementos: ";
        cin >> q;
    }while(q < 0);
    for(int i = 0; i < q; i++){
        this-> insert();
    }
}

void PilhaDuplamenteEncadeada:: insert(){
    Produto p;
    p.preencher();
    Nodo* novo = new Nodo(p);
    if(quant == 0){
        head = novo;
    }else{
        novo->setProx(head);
        head->setAnt(novo);
        head = novo;
    }
    quant++;
}

void PilhaDuplamenteEncadeada:: remove(){
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

bool PilhaDuplamenteEncadeada:: isEmpty(){
    return quant == 0 ? true : false;
}

Nodo* PilhaDuplamenteEncadeada:: getElemento(int posicao){
    Nodo* p = head;
    int j = 1;

    while(j <= posicao-1 && p->getProx() != NULL){
        p = p->getProx();
        j++;
    }
    return (j == posicao) ? p : NULL;
}