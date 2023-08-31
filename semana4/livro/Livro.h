#ifndef LIVRO_H
#define	LIVRO_H
#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    int isbn;
    string titulo;
    string autor;
    string editora;
    int edicao; 
    
public:
    
    Livro();
    Livro( Livro &outro);
    
    void imprimir() ;
    void imprimirReduzido() ;
    void preencher();
    void copiar( Livro& outro);
    
    ///metodo Getters e Setters
    void setEdicao(int edicao);
    int getEdicao() ;
    void setEditora(string editora);
    string getEditora() ;
    void setAutor(string autor);
    string getAutor() ;
    void setIsbn(int isbn);
    int getIsbn() ;
    void setTitulo(string titulo);
    string getTitulo() ;
    
 

};

#endif	/* LIVRO_H */

