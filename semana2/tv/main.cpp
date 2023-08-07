#include <iostream>
#include "TV.h"

using namespace std;

void QualDasDuasTvsEAMaisCara(TV tv1, TV tv2){
    if(tv1.getPreco() > tv2.getPreco()){
        cout << "A mais cara eh a " << tv1.getMarca();
    }else if(tv1.getPreco() < tv2.getPreco()){
        cout << "A mais cara eh a " << tv2.getMarca();
    }else{
        cout << "As duas tem o mermo preco";
    }
}

int main()
{
    TV tv1;
    TV tv2;
    tv1.fill();
    //tv1.print();
    tv2.fill();
    //tv2.print();
   /* tv1.setMarca("lige");
    tv1.setTamanho(14);
    tv1.setResolucao("144p");
    tv1.setPreco(800);*/
    QualDasDuasTvsEAMaisCara(tv1, tv2);
    return 0;
}
