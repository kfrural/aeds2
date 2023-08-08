#include "Casa.h"


Casa::Casa(){
    
}
Casa::Casa(Casa &outra){
    this->endereco = outra.getEndereco();
    this->area = outra.getArea();
    this->numQuartos = outra.getNumQuartos();
    this->preco = outra.getPreco();
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string Casa::getEndereco(){
    return endereco;
}
double Casa::getArea(){
    return area;
}
int Casa::getNumQuartos(){// definicao os metodos get pra pegar valor
    return numQuartos;
}
double Casa::getPreco(){
    return preco;
}

void Casa::setEndereco(string endereco){
    this-> endereco = endereco ;
}
void Casa::setArea(double area){// definicao do metodo set ra mecher no valor
    this-> area = area;
}
void Casa::setNumQuartos(int numQuartos){
    this-> numQuartos = numQuartos;
}
void Casa::setPreco(double preco){
    this->preco = preco;
}

void Casa::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Endereco: ";
    cin >> this->endereco;
    cout << "Area: ";
    cin >> this->area;
    cout << "Numero de quartos: ";
    cin >> this->numQuartos;
    cout << "Preco: ";
    cin >> this->preco;
}
void Casa::print(){
    cout << "\n\n\nImpressao dos dados\n\n";
    cout << "Endereco: " << this->endereco;
    cout << "\nArea: " << this->area;
    cout << "\nNumero de quartos: " << this->numQuartos;
    cout << "\nPreco: " << this->preco;
}
void Casa::copiar(Casa &outra){
    this->endereco = outra.getEndereco();
    this->area = outra.getArea();
    this->numQuartos = outra.getNumQuartos();
    this->preco = outra.getPreco();
}
