#include <iostream>
#include <string.h>
#include "carro.h"

using namespace std;

Carro::Carro(string nome, string marca, string motorizacao, string cor, double valor) : nome(nome), marca(marca), motorizacao(motorizacao), cor(cor), valor(valor){
    
}

string Carro:: getNome(){
    return nome;
}
string Carro:: getMarca(){
    return marca;
}
string Carro:: getMotorizacao(){
    return motorizacao;
}
string Carro:: getCor(){
    return cor;
}
double Carro:: getValor(){
    return valor;
}

void Carro:: setNome(string nome){
    this->nome = nome;
}
void Carro:: setMarca(string marca){
    this->marca = marca;
}
void Carro:: setMotorizacao(string motorizacao){
    this->motorizacao = motorizacao;
}
void Carro:: setCor(string cor){
    this->cor = cor;
}
void Carro:: setValor(double valor){
    this->valor = valor;
}

void Carro:: imprimir(){
    cout << "Dados do carro\n";
    cout << "Nome: " << nome << endl;
    cout << "Marca: " << marca << endl;
    cout << "Motorizacao: " << motorizacao << endl;
    cout << "Cor: " << cor << endl;
    cout << "Valor: " << valor << endl;
}

void Carro:: preencher(string nome, string marca, string motorizacao, string cor, double valor){
    this->nome = nome;
    this->marca = marca;
    this->motorizacao = motorizacao;
    this->cor = cor;
    this->valor = valor;
}

Carro Carro:: copiar(){
    return Carro(nome, marca, motorizacao, cor, valor);
}
