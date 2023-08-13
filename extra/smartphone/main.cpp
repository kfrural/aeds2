#include <iostream>
#include "Smartphone.h"

using namespace std;

void QualEhMaisCaro(Smartphone smartphone1, Smartphone smartphone2){
    if(smartphone1.getPreco() > smartphone2.getPreco()){
        cout << "O mais caro eh o " << smartphone1.getMarca();
    }else if(smartphone1.getPreco() < smartphone2.getPreco()){
        cout << "O mais caro eh o " << smartphone2.getMarca();
    }else{
        cout << "Os dois tem o mermo preco";
    }
}

int main()
{
    Smartphone smartphone1;
    Smartphone smartphone2;
    
    smartphone1.fill();
    smartphone1.print();
    smartphone2.fill();
    smartphone2.print();
    
    QualEhMaisCaro(smartphone1, smartphone2);

    return 0;
}
