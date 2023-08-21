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
        Produto(Produto& outro);
        
        int getId();
        string getNome();
        double getCusto();
        double getPreco();
        int getEstoque();
        
        void setId(int id);
        void setNome(string nome);
        void setCusto(double custo);
        void setPreco(double preco);
        void setEstoque(int estoque);
        
        void copiar(Produto &outro);
        void fill();
        void print();
};
