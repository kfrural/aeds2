#include <iostream>
#include "Livro.h"

using namespace std;

void QualDasDuasTvsEAMaisCara(Livro livro1, Livro livro2){
    if(livro1.getNumPaginas() > livro2.getNumPaginas()){
        cout << "O que tem mais paginas eh o: " << livro1.getTitulo();
    }else if(livro1.getNumPaginas() < livro2.getNumPaginas()){
        cout << "O que tem mais paginas eh o: " << livro2.getTitulo();
    }else{
        cout << "Os dois tem a merma quantidade de paginas\n";
    }
}

int main()
{
    Livro livro1;
    Livro livro2;
    livro1.fill();
    //livro1.print();
    livro2.fill();
    //livro2.print();
    QualDasDuasTvsEAMaisCara(livro1, livro2);
    return 0;
}
