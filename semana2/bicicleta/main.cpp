#include <iostream>
#include "Bicicleta.h"

using namespace std;

void QualEhMaisCara(Bicicleta bike1, Bicicleta bike2){
    if(bike1.getPreco() > bike2.getPreco()){
        cout << "A mais cara eh a " << bike1.getMarca();
    }else if(bike1.getPreco() < bike2.getPreco()){
        cout << "A mais cara eh a " << bike2.getMarca();
    }else{
        cout << "As duas tem o mermo preco";
    }
}

int main()
{
    Bicicleta bike1;
    Bicicleta bike2;
    bike1.fill();
    //bike1.print();
    bike2.fill();
    //bike2.print();
    QualEhMaisCara(bike1, bike2);
    return 0;
}
