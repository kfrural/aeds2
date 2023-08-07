#include <iostream>
#include "Filme.h"

using namespace std;

void QualEhMaisLongo(Filme filme1, Filme filme2){
    if(filme1.getDuracao() > filme2.getDuracao()){
        cout << "O mais longo eh a " << filme1.getTitulo();
    }else if(filme1.getDuracao() < filme2.getDuracao()){
        cout << "O mais longo eh a " << filme2.getTitulo();
    }else{
        cout << "As duas tem o merma duracao";
    }
}

int main()
{
    Filme filme1;
    Filme filme2;
    filme1.fill();
    //filme1.print();
    filme2.fill();
    //filme2.print();
    QualEhMaisLongo(filme1, filme2);
    return 0;
}
