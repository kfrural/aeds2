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

PilhaDuplamenteEncadeada:: imprimir(){
    cout << "\tListinha[";
    if(isEmpty()){
        Nodo* p = head;
        while(p != NULL){
            p->getItem().imprimirResumido();
            p = p->getProx();
        }
        cout << "]\n";
    }
}

PilhaDuplamenteEncadeada:: preencher(){
    int q = 0;
    do{
        cout << "Quanidade de elementos: ";
        cin >> q;
    }while(q < 0);
    for(int i = 0; i < q; i++){
        this-> insert();
    }
}

PilhaDuplamenteEncadeada:: insert(){
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

PilhaDuplamenteEncadeada:: remove(){
    if
}