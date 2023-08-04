#include <iostream>
#include <string>
#include "livro.h"
using namespace std;

Livro::Livro(string titulo, string autor, string editora, int numPaginas): titulo(titulo), autor(autor), editora(editora), numPaginas(numPaginas){}
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
    this->titulo = titulo;
}
void Livro::setAutor(string autor){// definicao do metodo set ra mecher no valor
    this->autor = autor;
}
void Livro::setEditora(string editora){
    this->editora = editora;
}
void Livro::setNumPaginas(int numPaginas){
    this->numPaginas = numPaginas;
}