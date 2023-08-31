#ifndef LISTALIVRO_H
#define	LISTALIVRO_H

#include "Livro.h"


class ListaContigua {
private:
    int tam, quant;
    Livro *lista;
    
    int contadorDeComparacoes;
    
    bool temEspaco(); 
    bool isEmpty ();
    bool indiceValido(int i);
    void shiftFront(int aPartir);
    void shiftEnd(int ate);
    void criaListaComLivrosAleatorios(int tam);

public:
    ListaContigua();
    ListaContigua(int tamanho);
    ListaContigua( ListaContigua& outra);
    ListaContigua( ListaContigua& outra, int novoTamanho);
    virtual ~ListaContigua();
            
    void insert();
    void insert(int posicao);
    void insert(Livro p);
    void remove();
    void remove(int posicao);
    
    void imprimir();
    void preencher();    
    string buscar(string isbnLivro);    
    Livro* buscarLivro(string isbn);
    int buscaBinaria(string isbn);
    
    //GETTERS E SETTERS
    void setLista(Livro* lista);
    Livro* getLista() ;
    void setQuant(int quant);
    int getQuant() ;
    void setTam(int tam);
    int getTam() ;
};

#endif	/* LISTALIVRO_H */
