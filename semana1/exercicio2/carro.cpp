#include <iostream>
#include <string>
#include "carro.h"

using namespace std;

Carro::Carro(string nome, string marca, double motorizacao, string cor, double valor) : nome(nome), marca(marca), motorizacao(motorizacao), cor(cor), valor(valor){
    
}

string Carro:: getNome(){
    return nome;
}
string Carro:: getMarca(){
    return marca;
}
double Carro:: getMotorizacao(){
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
void Carro:: setMotorizacao(double motorizacao){
    this->motorizacao = motorizacao;
}
void Carro:: setCor(string cor){
    this->cor = cor;
}
void Carro:: setValor(double valor){
    this->valor = valor;
}
