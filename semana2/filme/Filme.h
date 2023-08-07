#include <iostream>
#include <string>

using namespace std;

class Filme{
    private:
        string titulo;
        string diretor;
        double duracao;
        double preco;

    public:
    Filme();// construtor

        string getTitulo();//metodo get pega o valor
        string getDiretor();
        double getDuracao();
        double getPreco();

        void setTitulo(string titulo);
        void setDiretor(string diretor);
        void setDuracao(double duracao);//metodo set moifica o vaor
        void setPreco(double preco);
        
        void print();
        void fill();
        
};
