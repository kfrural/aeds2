#include "Livro.h"

using namespace std;

Livro::Livro() {
    id = -1;
    nome = "";
    preco = -1;
    custo = -1;
    estoque = -1;    
}

Livro::Livro( Livro& outro){
    id = outro.getId();
    nome = outro.getNome();
    preco = outro.getPreco();
    custo = outro.getCusto();
    estoque = outro.getEstoque();
}

void Livro::preencher(){
    cout << "--- Informe o Livro ---\n";
    cout << "id:";
    cin >> id;
    cout << "Nome:";
    cin >> nome;    
    cout << "Custo:";
    cin >> custo;
    cout << "Preco:";
    cin >> preco;
    cout <<"Estoque:";
    cin >> estoque;         
    cout << "--------------------------\n";
}

void Livro::imprimir() {
    cout << "----- Livro -----\n";
    cout << "Id:"<< id << endl;
    cout << "Nome:" << nome << endl;
    cout << "Custo:" << custo << endl;
    cout << "Preco:" << preco << endl;
    cout << "Estoque:" << estoque << endl;
    cout << "--------------------\n";
}

void Livro::imprimirReduzido() {
    cout << "{"<< id << ", " 
            << nome << ", "
            << custo << ", "
            << preco << ", "
            << estoque << "}, ";
}

void Livro::copiar( Livro &outro){
    id = outro.getId();
    nome = outro.getNome();
    preco = outro.getPreco();
    custo = outro.getCusto();
    estoque = outro.getEstoque();
}

void Livro::setEstoque(int estoque) {
    this->estoque = estoque;
}

int Livro::getEstoque()  {
    return estoque;
}

void Livro::setCusto(double custo) {
    this->custo = custo;
}

double Livro::getCusto()  {
    return custo;
}

void Livro::setPreco(double preco) {
    this->preco = preco;
}

double Livro::getPreco()  {
    return preco;
}

void Livro::setId(int id) {
    this->id = id;
}

int Livro::getId()  {
    return id;
}

void Livro::setNome(string nome) {
    this->nome = nome;
}

string Livro::getNome()  {
    return nome;
}


