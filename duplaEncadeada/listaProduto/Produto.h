#include <iostream>
#include <string>

using namespace std;

class Produto{
    private:
        int id;
        string nome;
        double custo;
        double preco;
        int estoque;

    public:
        Produto();
        Produto(Produto &outro);
        
        void setId(int id);
        void setNome(string nome);
        void setCusto(double custo);
        void setPreco(double preco);
        void setEstoque(int estoque);
        
        int getId();
        string getNome();
        double getCusto();
        double getPreco();
        int getEstoque();
        
        void copiar(const Produto &outro);
        void preencher();
        void imprimir();
        void imprimirLista();
};
