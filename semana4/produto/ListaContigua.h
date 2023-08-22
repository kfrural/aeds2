#include "Produto.h"

class ListaContigua {
private:
    int tam;
    int quant;
    Produto *lista;
    int contComparacoes;
        
public:
    ListaContigua();
        
    int getTam();
    int getQuant();
    Produto* getLista();
        
    void setTam(int tam);
    void setQuant(int quant);
    void setLista(Produto* lista);
        
    void insert();
};
