#include <iostream>
#include "Musica.h"

using namespace std;

void QualEhMaisLongo(Musica musica1, Musica musica2){
    if(musica1.getDuracao() > musica2.getDuracao()){
        cout << "O mais longo eh a " << musica1.getTitulo();
    }else if(musica1.getDuracao() < musica2.getDuracao()){
        cout << "O mais longo eh a " << musica2.getTitulo();
    }else{
        cout << "As duas tem o merma duracao";
    }
}

int main()
{
    Musica musica1;
    Musica musica2;
    musica1.fill();
    //musica1.print();
    musica2.fill();
    //musica2.print();
    QualEhMaisLongo(musica1, musica2);
    return 0;
}
