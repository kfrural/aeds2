#include "Livro.h"


Livro::Livro(){
    
}
//declara o construtor e depois do :: inicializa o trem com o valor correspondente
string Livro::getTitulo(){
    return titulo;
}
string Livro::getAutor(){
    return autor;
}
string Livro::getEditora(){// definicao os metodos get pra pegar valor
    return editora;
}
int Livro::getNumPaginas(){
    return numPaginas;
}

void Livro::setTitulo(string titulo){
    this-> titulo = titulo ;
}
void Livro::setAutor(string autor){// definicao do metodo set ra mecher no valor
    this-> autor = autor;
}
void Livro::setEditora(string editora){
    this-> editora = editora;
}
void Livro::setNumPaginas(int numPaginas){
    this->numPaginas = numPaginas;
}

void Livro::fill(){
    cout << "Preencha abaixo:\n\n";
    cout << "Titulo: ";
    cin >> this->titulo;
    cout << "Autor: ";
    cin >> this->autor;
    cout << "Editora: ";
    cin >> this->editora;
    cout << "Numero de Paginas: ";
    cin >> this->numPaginas;
}
void Livro::print(){
    cout << "\n\n\nImpressao dos dados\n\n";
    cout << "Titulo: " << this->titulo;
    cout << "\nAutor: " << this->autor;
    cout << "\nEditora: " << this->editora;
    cout << "\nNumero de paginas: " << this->numPaginas;
}
