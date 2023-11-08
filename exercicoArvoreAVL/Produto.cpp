
#include "Produto.h"

using namespace std;

Produto::Produto() {
    id = -1;
    nome = "";
    preco = -1;
    custo = -1;
    estoque = -1;    
}

Produto::Produto(const Produto& outro){
    id = outro.getId();
    nome = outro.getNome();
    preco = outro.getPreco();
    custo = outro.getCusto();
    estoque = outro.getEstoque();
}

void Produto::preencher(){
    cout << "---- Informe o produto ----\n";
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
    cout << "----------------------------\n";
}

void Produto::imprimir() const{
    cout << "----- Produto ------\n";
    cout << "Id:"<< id << endl;
    cout << "Nome:"<< nome << endl;
    cout << "Custo:" << custo << endl;
    cout << "Preco:" << preco << endl;
    cout << "Estoque:" << estoque << endl;
    cout << "-------------------------------------------\n";
}

void Produto::imprimirResumido() const{
    cout << "{" << id << ", " << nome <<", " << custo << ", "<< preco << ", " << estoque <<"},";
}

string Produto::imprimirParaArquivo() const{
    string texto;
    texto = to_string(id) +" " +
            nome +" " +
            to_string(custo) + " "+
            to_string(preco) + " " +
            to_string(estoque);
    return texto;
}

void Produto::copiar(const Produto &outro){
    id = outro.getId();
    nome =  outro.getNome();
    preco = outro.getPreco();
    custo = outro.getCusto();
    estoque = outro.getEstoque();
}

/**
 * 
 * @param outro
 * @return -1 é menor que o outro, 0 é igual, 1 é maior que o outro
 */
int Produto::EhMaiorQue(const Produto& outro) {
    if (id > outro.getId())
        return 1;
    else if (id < outro.getId())
        return -1;
    else
        return 0;

}

bool Produto::eIgual(const Produto& outro) {
    if (id != outro.getId())
        return false;
    if (nome != outro.getNome())
        return false;
    if (preco != outro.getPreco())
        return false;
    if (custo != outro.getCusto())
        return false;
    if (estoque != outro.getEstoque())
        return false;

    return true;
}

void Produto::setEstoque(int estoque) {
    this->estoque = estoque;
}

int Produto::getEstoque() const {
    return estoque;
}

void Produto::setCusto(double custo) {
    this->custo = custo;
}

double Produto::getCusto() const {
    return custo;
}

void Produto::setPreco(double preco) {
    this->preco = preco;
}

double Produto::getPreco() const {
    return preco;
}

void Produto::setId(int id) {
    this->id = id;
}

int Produto::getId() const {
    return id;
}

void Produto::setNome(string nome) {
    this->nome = nome;
}

string Produto::getNome() const {
    return this->nome;
}

