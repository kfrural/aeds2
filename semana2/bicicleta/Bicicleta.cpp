#include "Bicicleta.h"


Bicicleta::Bicicleta(){
    
}
Bicicleta::Bicicleta(Bicicleta &outra){
    this->marca = outra.getMarca();
    this->modelo = outra.getModelo();
    this->tamQuadro = outra.getTamQuadro();
    this->preco = outra.getPreco();
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string Bicicleta::getMarca(){
    return marca;
}
string Bicicleta::getModelo(){
    return modelo;
}
int Bicicleta::getTamQuadro(){// definicao os metodos get pra pegar valor
    return tamQuadro;
}
double Bicicleta::getPreco(){
    return preco;
}

void Bicicleta::setMarca(string marca){
    this-> marca = marca ;
}
void Bicicleta::setModelo(string modelo){// definicao do metodo set ra mecher no valor
    this-> modelo = modelo;
}
void Bicicleta::setTamQuadro(int tamQuadro){
    this-> tamQuadro = tamQuadro;
}
void Bicicleta::setPreco(double preco){
    this->preco = preco;
}

void Bicicleta::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Marca: ";
    cin >> this->marca;
    cout << "Modelo: ";
    cin >> this->modelo;
    cout << "Tamanho do Quadro: ";
    cin >> this->tamQuadro;
    cout << "Preco: ";
    cin >> this->preco;
}
void Bicicleta::print(){
    cout << "\n\n\nImpressao dos dados\n\n";
    cout << "Marca: " << this->marca;
    cout << "\nModelo: " << this->modelo;
    cout << "\nTamanho do Quadro: " << this->tamQuadro;
    cout << "\nPreco: " << this->preco;
}
void Bicicleta::copiar(Bicicleta &outra){
    this->marca = outra.getMarca();
    this->modelo = outra.getModelo();
    this->tamQuadro = outra.getTamQuadro();
    this->preco = outra.getPreco();
}



















