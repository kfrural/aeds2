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
        Produto(const Produto &outro);
        
        void setId(int id);
        void setNome(string nome);
        void setCusto(double custo);
        void setPreco(double preco);
        void setEstoque(int estoque);
        
        int getId() const;
        string getNome() const;
        double getCusto() const;
        double getPreco() const;
        int getEstoque() const;
        
        void copiar(const Produto &outro);
        void preencher();
        void imprimir() const;
        void imprimirLista() const;
};
