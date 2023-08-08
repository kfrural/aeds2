#include "AnimalEstimacao.h"


AnimalEstimacao::AnimalEstimacao(){
    
}
AnimalEstimacao::AnimalEstimacao(AnimalEstimacao &outra){
    this->especie = outra.getEspecie();
    this->raca = outra.getRaca();
    this->idade = outra.getIdade();
    this->peso = outra.getPeso();
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string AnimalEstimacao::getEspecie(){
    return especie;
}
string AnimalEstimacao::getRaca(){
    return raca;
}
int AnimalEstimacao::getIdade(){// definicao os metodos get pra pegar valor
    return idade;
}
double AnimalEstimacao::getPeso(){
    return peso;
}

void AnimalEstimacao::setEspecie(string especie){
    this-> especie = especie ;
}
void AnimalEstimacao::setRaca(string raca){// definicao do metodo set ra mecher no valor
    this-> raca = raca;
}
void AnimalEstimacao::setIdade(int idade){
    this-> idade = idade;
}
void AnimalEstimacao::setPeso(double peso){
    this->peso = peso;
}

void AnimalEstimacao::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Especie: ";
    cin >> this->especie;
    cout << "Raca: ";
    cin >> this->raca;
    cout << "Idade: ";
    cin >> this->idade;
    cout << "Peso: ";
    cin >> this->peso;
}
void AnimalEstimacao::print(){
    cout << "\n\n\nImpressao dos dados\n\n";
    cout << "Especie: " << this->especie;
    cout << "\nRaca: " << this->raca;
    cout << "\nIdade: " << this->idade;
    cout << "\nPeso: " << this->peso;
}
void AnimalEstimacao::copiar(AnimalEstimacao &outra){
    this->especie = outra.getEspecie();
    this->raca = outra.getRaca();
    this->idade = outra.getIdade();
    this->peso = outra.getPeso();
}



















