#include "ListaContigua.h"

ListaContigua::ListaContigua(){
    quant = 0;
    cout << "Informe o tamanho da lista: ";
    cin >> tam;
    lista = new Produto[tam];
    contComparacoes = 0;
}

int ListaContigua::getTam(){
    return tam;
}
int ListaContigua::getQuant(){
    return quant;
}
Produto* ListaContigua::getLista(){
    return lista;
}

void ListaContigua::setTam(int tam){
    this->tam = tam;
}
void ListaContigua::setQuant(int quant){
    this->quant = quant;
}
void ListaContigua::setLista(Produto* lista){
    this->lista = lista;
}


