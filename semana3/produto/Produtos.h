#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Produto{
    private:
        int id;
        string nome;
        double valor;
        
    public:
        Produto();
        
        int getId();
        string getNome();
        double getValor();
        
        void setId(int id);
        void setNome(string nome);
        void setValor(double valor);
        
    void lerProdutos();
};
