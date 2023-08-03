#include <iostream>
#include "carro.h"
#include <string>

void preencherCarro(Carro& carro, string nome, string marca, string motorizacao, string cor, double valor){
    carro.preencher(nome, marca, motorizacao, cor, valor);
}

void imprimirCarro(Carro& carro){
    cout << "Dados abaixo\n";
    cout << "Nome: " << carro.getNome() << endl;
    cout << "Marca: " << carro.getMarca() << endl;
    cout << "Motorizacao: " << carro.getMotorizacao() << endl;
    cout << "Cor: " << carro.getCor() << endl;
    cout << "Valor: " << carro.getValor() << endl;
}

void verificaMotorizacao()

int main(){
    Carro carro [3];
    
    preencherCarro(carro[0], "Uninho com escada", "Fiat", "1.0", "Prata", 13000);
    preencherCarro(carro[1], "Stradinha", "Fiat", "1.6", "Branquinha", 126000);
    preencherCarro(carro[2], "Bodona", "Dodge", "6.7", "Branquinha", 500000);
    
    cout << "Carros\n";
    for(int i = 0; i < 3; i++){
        cout << "Carro " << i+1 << endl;
        imprimirCarro(carro[i]);
        cout << "\n";
    }
    
    return 0;
}
