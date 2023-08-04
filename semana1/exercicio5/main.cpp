#include <iostream>
#include <string>
#include "livro.h"

using namespace std;

int main(){
    Livro livro1("De frente com o serial killer", "Mark Olshaker", "Harper Collins", 336);//preencher as class
    Livro livro2("Dexter - a mao esquerda de Deus", "Jeff Lindsay", "Editora Planeta", 272);

    if(livro1.getNumPaginas() > livro2.getNumPaginas()){//verificar qual tem mais pag
        cout << "O livro que tem mais paginas eh: " << livro1.getTitulo() << endl;
    }else{
        cout << "O livro que tem mais paginas eh: " << livro2.getTitulo() << endl;
    }

    return 0;
}