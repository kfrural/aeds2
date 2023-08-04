#include <iostream>
#include <string>
#include "motor.h"
using namespace std;

Motor::Motor(string tipo, double potencia, double consumo): tipo(tipo), potencia(potencia), consumo(consumo){}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string Motor::getTipo(){
    return tipo;
}
double Motor::getPotencia(){
    return potencia;
}
double Motor::getConsumo(){// definicao os metodos get pra pegar valor
    return consumo;
}

void Motor::setTipo(string tipo){
    this->tipo = tipo;
}
void Motor::setPotencia(double potencia){// definicao do metodo set ra mecher no valor
    this->potencia = potencia;
}
void Motor::setConsumo(double consumo){
    this->consumo = consumo;
}