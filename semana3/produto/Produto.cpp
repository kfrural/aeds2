#include "Produtos.h"

Produto::Produto(){
    this->id = id;
    this->nome = nome;
    this->valor = valor;
}

int Produto::getId(){
    return id;
}
string Produto::getNome(){
    return nome;
}
double Produto::getValor(){
    return valor;
}

void Produto::setId(int id){
    this->id = id;
}
void Produto::setNome(string nome){
    this->nome = nome;
}
void Produto::setValor(double valor){
    this->valor = valor;
}

void Produto::lerProdutos(){
    string caminhoPasta = "produtos.txt";
    ifstream arquivoLido;
    arquivoLido.open(caminhoPasta);
    
    string linha;
    while (getline(arquivoLido, linha)) {
        int primeiroSeparador = linha.find(" - ");
        int segundoSeparador = linha.find(" - ", primeiroSeparador + 3);

        int id = stoi(linha.substr(0, primeiroSeparador));
        string nome = linha.substr(primeiroSeparador + 3, segundoSeparador - primeiroSeparador - 3);
        double valor = stod(linha.substr(segundoSeparador + 3));

        if (valor > 50.00) {
            cout << "ID: " << id << "\nNome: " << nome << "\nValor: " << valor << "\n\n";
        }
    }
    arquivoLido.close();
}
