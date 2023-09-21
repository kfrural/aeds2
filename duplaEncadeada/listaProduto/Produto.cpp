#include "Produto.h"

Produto::Produto(){
    id = -1;
    nome = "";
    custo = -1;
    preco = -1;
    estoque = -1;
}
Produto::Produto(const Produto &outro){
    id = outro.getId();
    nome = outro.getNome();
    custo = outro.getCusto();
    preco = outro.getPreco();
    estoque = outro.getEstoque();
}

void Produto::setId(int id){
    this-> id = id;
}
void Produto::setNome(string nome){
    this-> nome = nome;
}
void Produto::setCusto(double custo){
    this-> custo = custo;
}
void Produto::setPreco(double preco){
    this-> preco = preco;
}
void Produto:: setEstoque(int estoque){
    this-> estoque = estoque;
}

int Produto::getId() const{
    return id;
}
string Produto::getNome() const{
    return nome;
}
double Produto::getCusto() const{
    return custo;
}
double Produto::getPreco() const{
    return preco;
}
int Produto::getEstoque() const{
    return estoque;
}


void Produto::copiar(const Produto &outro){
    id = outro.getId();
    nome = outro.getNome();
    custo = outro.getCusto();
    preco = outro.getPreco();
    estoque = outro.getEstoque();
}

void Produto::preencher(){
    cout << "Preencha abaixo\n\n";
    cout << "ID: ";
    cin >> id;
    cout <<"Nome: ";
    cin >> nome;
    cout << "Custo: ";
    cin >> custo;
    cout << "Preco: ";
    cin >> preco;
    cout << "Estoque: ";
    cin >> estoque;
    cout << "\n\n";
}

void Produto::imprimir() const{
    cout << "Informacoes do produto\n\n";
    cout << "ID: " << id;
    cout <<"\nNome: " << nome;
    cout << "\nCusto: " << custo;
    cout << "\nPreco: " << preco;
    cout << "\nEstoque: " << estoque;
    cout << "\n\n";
}

void Produto::imprimirLista() const{
    cout <<"{ " << id << "-" << nome << "-" << custo << "-" << preco << "-" << estoque << " }\n\n";
}
