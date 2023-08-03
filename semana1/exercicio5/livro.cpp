#include "livro.h"

Livro::Livro(std::string titulo, std::string autor, std::string editora, int numPaginas): titulo(titulo), autor(autor), eidtora(editora), numPaginas(numPaginas){}

std::string Livro::getTitulo(){
    return titulo;
}
std::string Livro::getAutor(){
    return autor;
}
std::string Livro::getEditora(){
    return editora;
}
int Livro::getNumPaginas(){
    return numPaginas;
}

void Livro::setTitulo(std::string titulo){
    this->titulo = titulo;
}
void Livro::setAutor(std::string autor){
    this->autor = autor;
}
void Livro::setEditora(std::string editora){
    this->editora = editora;
}
void Livro::setNumPaginas(int numPaginas){
    this->numPaginas = numPaginas;
}