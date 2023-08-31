#ifndef LIVRO_H
#define	LIVRO_H
#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string isbn;
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
    void setIsbn(string isbn);
    string getIsbn() ;
    void setNome(string nome);
    string getNome() ;
    
 

};

#endif	/* LIVRO_H */

