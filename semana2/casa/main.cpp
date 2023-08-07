#include <iostream>
#include "Casa.h"

using namespace std;

void QualDasDuasTvsEAMaisCara(Casa casa1, Casa casa2){
    if(casa1.getPreco() > casa2.getPreco()){
        cout << "A mais cara eh a de endereco: " << casa1.getEndereco();
    }else if(casa1.getPreco() < casa2.getPreco()){
        cout << "A mais cara eh a de endereco: " << casa2.getEndereco();
    }else{
        cout << "As duas tem o mermo preco";
    }
}

int main()
{
    Casa casa1;
    Casa casa2;
    casa1.fill();
    //casa1.print();
    casa2.fill();
    //casa2.print();
    QualDasDuasTvsEAMaisCara(casa1, casa2);
    return 0;
}
