#include "Nodo.h"

class FilaDuplamenteEncadeada{
    private:
        int quant;
        Nodo* head;

    public:
        FilaDuplamenteEncadeada();

        void setQuant(int quant);
        int getQuant();

        void imprimir();
        void preencher();
        void insert();
        void remove();
        bool isEmpty();
        Nodo* getElemento(int posicao);
};
