#include "Livro.h"

using namespace std;

Livro::Livro() {
    isbn = "";
    titulo = "";
    autor = "";
    editora = "";
    edicao = -1;    
}

Livro::Livro( Livro& outro){
    isbn = outro.getIsbn();
    titulo = outro.getTitulo();
    autor = outro.getAutor();
    editora = outro.getEditora();
    edicao = outro.getEdicao();
}

void Livro::preencher(){
    cout << "--- Informe o Livro ---\n";
    cout << "Isbn:";
    cin >> isbn;
    cout << "Titulo:";
    cin >> titulo;    
    cout << "Editora:";
    cin >> editora;
    cout << "Autor:";
    cin >> autor;
    cout <<"Edicao:";
    cin >> edicao;         
    cout << "--------------------------\n";
}

void Livro::imprimir() {
    cout << "----- Livro -----\n";
    cout << "Isbn:"<< isbn << endl;
    cout << "Titulo:" << titulo << endl;
    cout << "Editora:" << editora << endl;
    cout << "Autor:" << autor << endl;
    cout << "Edicao:" << edicao << endl;
    cout << "--------------------\n";
}

void Livro::imprimirReduzido() {
    cout << "{"<< isbn << ", " 
            << titulo << ", "
            << editora << ", "
            << autor << ", "
            << edicao << "}, ";
}

void Livro::copiar( Livro &outro){
    isbn = outro.getIsbn();
    titulo = outro.getTitulo();
    autor = outro.getAutor();
    editora = outro.getEditora();
    edicao = outro.getEdicao();
}

void Livro::setEdicao(int edicao) {
    this->edicao = edicao;
}

int Livro::getEdicao()  {
    return edicao;
}

void Livro::setEditora(string editora) {
    this->editora = editora;
}

string Livro::getEditora()  {
    return editora;
}

void Livro::setAutor(string autor) {
    this->autor = autor;
}

string Livro::getAutor()  {
    return autor;
}

void Livro::setIsbn(string isbn) {
    this->isbn = isbn;
}

string Livro::getIsbn()  {
    return isbn;
}

void Livro::setTitulo(string titulo) {
    this->titulo = titulo;
}

string Livro::getTitulo()  {
    return titulo;
}


