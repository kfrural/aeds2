#include "Produto.h"
#include <string>

Produto::Produto(){
    this->id = id;
    this->nome = nome;
    this->custo = custo;
    this-> preco = preco;
    this->estoque = estoque;
}
Produto::Produto(Produto& outro){
    id = outro.getId();
    nome = outro.getNome();
    preco = outro.getPreco();
    custo = outro.getCusto();
    estoque = outro.getEstoque();
}


int Produto::getId(){
    return id;
}
string Produto::getNome(){
    return nome;
}
double Produto::getCusto(){
    return custo;
}
double Produto::getPreco(){
    return 0;
}
int Produto::getEstoque(){
    return 0;
}

void Produto::setId(int id){
    this->id = id;
}
void Produto::setNome(string nome){
    this->nome = nome;
}
void Produto::setCusto(double custo){
    this->custo = custo;
}
void Produto::setPreco(double preco){
    this->preco = preco;
}
void Produto::setEstoque(int estoque){
    this->estoque = estoque;
}

void Produto::copiar(Produto &outro){
    id = outro.getId();
    nome = outro.getNome();
    preco = outro.getPreco();
    custo = outro.getCusto();
    estoque = outro.getEstoque();
}

void Produto::fill(){
    cout << "Preencha os dados abaixo\n\n";
    cout << "ID: ";
    cin >> this->id;
    cout << "Nome: ";
    cin >> this->nome;
    cout << "Custo: ";
    cin >> this->custo;
    cout << "Preco: ";
    cin >> this->preco;
    cout << "Estoque: ";
    cin >> this->estoque;
}

void Produto::print(){
    cout << "Impressao dos dados\n\n";
    cout << "ID: " << this->id;
    cout << "\nNome: " << this->nome;
    cout << "\nCusto: " << this->custo;
    cout << "\nPreco: " << this->preco;
    cout << "\nEstoque: " << this->estoque;
}
