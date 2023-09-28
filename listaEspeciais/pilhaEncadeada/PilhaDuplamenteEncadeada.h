#include "Nodo.h"

class PilhaDuplamenteEncadeada{
    private:
        int quant;
        Nodo* head;

    public:
        PilhaDuplamenteEncadeada();

        void setQuant(int quant);
        int getQuant();

        void imprimir();
        void preencher();
        void insert();
        void remove();
        bool isEmpty();
        Nodo* getElemento(int posicao);
};
