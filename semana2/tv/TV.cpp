#include "TV.h"


TV::TV(){
    
}

TV::TV(string marca, double tamanho, string resolucao, double preco){
    this->marca = marca;
    this->tamanho = tamanho;
    this->resolucao = resolucao;
    this->preco = preco;
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string TV::getMarca(){
    return marca;
}
double TV::getTamanho(){
    return tamanho;
}
string TV::getResolucao(){// definicao os metodos get pra pegar valor
    return resolucao;
}
double TV::getPreco(){
    return preco;
}

void TV::setMarca(string marca){
    this-> marca = marca ;
}
void TV::setTamanho(double tamanho){// definicao do metodo set ra mecher no valor
    this->tamanho = tamanho;
}
void TV::setResolucao(string resolucao){
    this->resolucao = resolucao;
}
void TV::setPreco(double preco){
    this->preco = preco;
}

void TV::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Marca: ";
    cin >> this->marca;
    cout << "Tamanho: ";
    cin >> this->tamanho;
    cout << "Resolucao: ";
    cin >> this->resolucao;
    cout << "Preco: ";
    cin >> this->preco;
}
void TV::print(){
    cout << "\n\n\nNomezin da TVzinha\n\n";
    cout << "Marca: " << this->marca;
    cout << "\nTamanho: " << this->tamanho;
    cout << "\nResolucao: " << this->resolucao;
    cout << "\nPreco: " << this->preco;
}

