#include "Filme.h"


Filme::Filme(){
    
}
Filme::Filme(Filme &outra){
    this->titulo = outra.getTitulo();
    this->diretor = outra.getDiretor();
    this->duracao = outra.getDuracao();
    this->preco = outra.getPreco();
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string Filme::getTitulo(){
    return titulo;
}
string Filme::getDiretor(){
    return diretor;
}
double Filme::getDuracao(){// definicao os metodos get pra pegar valor
    return duracao;
}
double Filme::getPreco(){
    return preco;
}

void Filme::setTitulo(string titulo){
    this-> titulo = titulo ;
}
void Filme::setDiretor(string diretor){// definicao do metodo set ra mecher no valor
    this-> diretor = diretor;
}
void Filme::setDuracao(double duracao){
    this-> duracao = duracao;
}
void Filme::setPreco(double preco){
    this->preco = preco;
}

void Filme::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Titulo: ";
    cin >> this->titulo;
    cout << "Diretor: ";
    cin >> this->diretor;
    cout << "Duracao: ";
    cin >> this->duracao;
    cout << "Preco: ";
    cin >> this->preco;
}
void Filme::print(){
    cout << "\n\n\nImpressao dos dados\n\n";
    cout << "Titulo: " << this->titulo;
    cout << "\nDiretor: " << this->diretor;
    cout << "\nDuracao: " << this->duracao;
    cout << "\nPreco: " << this->preco;
}
void Filme::copiar(Filmme &outra){
    this->titulo = outra.getTitulo();
    this->diretor = outra.getDiretor();
    this->duracao = outra.getDuracao();
    this->preco = outra.getPreco();
}




















