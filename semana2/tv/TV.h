#include <iostream>
#include <string>

using namespace std;

class TV{
    private:
        string marca;
        double tamanho;
        string resolucao;
        double preco;

    public:
    TV();
    TV(string marca, double tamanho, string resolucao, double preco);// construtor

        string getMarca();//metodo get pega o valor
        double getTamanho();
        string getResolucao();
        double getPreco();

        void setMarca(string marca);
        void setTamanho(double tamanho);
        void setResolucao(string resolucao);//metodo set moifica o vaor
        void setPreco(double preco);
        
        void print();
        void fill();
        
};
