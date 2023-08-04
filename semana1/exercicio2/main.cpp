#include <iostream>
#include "carro.h"
#include <string>

using namespace std;

int main(){
    
    Carro carro1("Uninho com escada", "Fiat", 1.0, "Prata", 13000);
    Carro carro2("Stradinha", "Fiat", 1.6, "Branquinha", 126000);
    Carro carro3("Bodona", "Dodge", 6.7, "Branquinha", 500000);

    if(carro1.getMotorizacao() > 1.0){
        cout << carro1.getNome() << "\t";
    }if(carro2.getMotorizacao() > 1.0){
        cout << carro2.getNome() << "\t";
    }if(carro3.getMotorizacao() > 1.0){
        cout << carro3.getNome();
    }
    cout << " possuem motorizacao maior que 1.0\n";
    
    if(carro1.getMarca()== carro2.getMarca()){
        cout << carro1.getNome() << " e " << carro2.getNome() << " sao da mesma marca\n";
    }if(carro1.getMarca()== carro3.getMarca()){
        cout << carro1.getNome() << " e " << carro3.getNome() << " sao da mesma marca\n";
    }if(carro2.getMarca()== carro3.getMarca()){
        cout << carro2.getNome() << " e " << carro3.getNome() << " sao da mesma marca\n";
    }if(carro1.getMarca()== carro2.getMarca() && carro1.getMarca() == carro3.getMarca() && carro2.getMarca() == carro3.getMarca()){
        cout << "Os 3 sao da mesma marca\n";
    }if(carro1.getMarca() != carro2.getMarca() && carro1.getMarca() != carro3.getMarca() && carro2.getMarca() != carro3.getMarca()){
        cout << "Nenhum eh da mesma marca\n";
    }

    double maiorValor = 0.0;
    double resto = 0.0;
    double resultado = 0.0;

        if (carro1.getValor() > carro2.getValor() && carro1.getValor() > carro3.getValor()) {
            maiorValor = carro1.getValor();
            resto = carro2.getValor() + carro3.getValor();
        }
        if (carro2.getValor() > carro1.getValor() && carro2.getValor() > carro3.getValor()) {
            maiorValor = carro2.getValor();
            resto = carro1.getValor() + carro3.getValor();
        }if (carro3.getValor() > carro2.getValor() && carro3.getValor() > carro1.getValor()) {
            maiorValor = carro3.getValor();
            resto = carro2.getValor() + carro1.getValor();
        }

        resultado = ((maiorValor - resto)/ resto)* 100.0;


    cout << "A porcentagem em q o carro mais caro tem sobre o mais barato eh: " << resultado;

    return 0;
}
