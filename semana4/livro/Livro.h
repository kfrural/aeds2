#ifndef LIVRO_H
#define	LIVRO_H
#include <iostream>
#include <string.h>

using namespace std;

class Livro {
private:
    int id;
    string nome;
    double preco;
    double custo;
    int estoque; 
    
public:
    
    Livro();
    Livro( Livro &outro);
    
    void imprimir() ;
    void imprimirReduzido() ;
    void preencher();
    void copiar( Livro& outro);
    
    ///metodo Getters e Setters
    void setEstoque(int estoque);
    int getEstoque() ;
    void setCusto(double custo);
    double getCusto() ;
    void setPreco(double preco);
    double getPreco() ;
    void setId(int id);
    int getId() ;
    void setNome(string nome);
    string getNome() ;
    
 

};

#endif	/* LIVRO_H */

