#include "Smartphone.h"

Smartphone::Smartphone(){
    
}
Smartphone::Smartphone(Smartphone &outra){
    this->marca = outra.getMarca();
    this->tamTela = outra.getTamTela();
    this->SO = outra.getSO();
    this->preco = outra.getPreco();
}

string Smartphone::getMarca(){
    return marca;
}
double Smartphone::getTamTela(){
    return tamTela;
}
string Smartphone::getSO(){
    return SO;
}
double Smartphone::getPreco(){
    return preco;
}

void Smartphone::setMarca(string marca){
    this-> marca = marca;
}
void Smartphone::setTamTela(double tamTela){
    this-> tamTela = tamTela;
}
void Smartphone::setSO(string SO){
    this->SO = SO;
}
void Smartphone::setPreco(double preco){
    this->preco = preco;
}

void Smartphone::fill(){
    cout << "Preencha os dados abaixo\n\n";
    cout << "Marca: ";
    cin >> this->marca;
    cout << "Tamanho da tela: ";
    cin >> this->tamTela;
    cout << "Sistema Operacional: ";
    cin >> this->SO;
    cout << "Preco: ";
    cin >> this->preco;
}

void Smartphone::print(){
    cout << "\n\nImpressao dos dados\n\n";
    cout << "Marca: " << this->marca;
    cout << "\nTamanho da tela: " << this->tamTela;
    cout << "\nSistema operacional: " << this->SO;
    cout << "\nPreco: " << this->preco;
}

void Smartphone::copiar(Smartphone &outra){
    this->marca = outra.getMarca();
    this->tamTela = outra.getTamTela();
    this->SO = outra.getSO();
    this->preco = outra.getPreco();
}









