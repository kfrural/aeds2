#include "Nodo"
#include "Produto.h"

class DuplamenteEncadeada{
    private:
        int quant;
        Nodo* head;
        bool isEmpty()
        
    public:
        DuplamenteEncadeada();
        
        void setQuant(int quant);
        int getQuant();
        
        void preencher();
        void imprimir();
        void insert();
        void insert(int posicao);
        void remover();
        void remover(int posicao);
        Nodo* buscar(int idProduto);
        Nodo* getElemento(int posicao);
};
