#include <iostream>
#include <string>
#include "motor.h"

using namespace std;

int main(){
    Motor motor1("Eletrico", 110.0, 2.0);//preencher as class
    Motor motor2("Diesel", 140.0, 1.8);

    if(motor1.getPotencia() > motor2.getPotencia()){//verificar qual tem mais potencia
        cout << "O motor que tem mais potencia eh: " << motor1.getTipo() << endl;
    }else{
        cout << "O motor que tem mais potencia eh: " << motor2.getTipo() << endl;
    }

    return 0;
}