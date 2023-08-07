#include "Musica.h"


Musica::Musica(){
    
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string Musica::getTitulo(){
    return titulo;
}
string Musica::getArtista(){
    return artista;
}
double Musica::getDuracao(){// definicao os metodos get pra pegar valor
    return duracao;
}
double Musica::getPreco(){
    return preco;
}

void Musica::setTitulo(string titulo){
    this-> titulo = titulo ;
}
void Musica::setArtista(string artista){// definicao do metodo set ra mecher no valor
    this-> artista = artista;
}
void Musica::setDuracao(double duracao){
    this-> duracao = duracao;
}
void Musica::setPreco(double preco){
    this->preco = preco;
}

void Musica::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Titulo: ";
    cin >> this->titulo;
    cout << "Artista: ";
    cin >> this->artista;
    cout << "Duracao: ";
    cin >> this->duracao;
    cout << "Preco: ";
    cin >> this->preco;
}
void Musica::print(){
    cout << "\n\n\nImpressao dos dados\n\n";
    cout << "Titulo: " << this->titulo;
    cout << "\nArtista: " << this->artista;
    cout << "\nDuracao: " << this->duracao;
    cout << "\nPreco: " << this->preco;
}




















