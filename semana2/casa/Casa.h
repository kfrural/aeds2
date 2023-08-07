#include <iostream>
#include <string>

using namespace std;

class Casa{
    private:
        string endereco;
        double area;
        int numQuartos;
        double preco;

    public:
    Casa();// construtor

        string getEndereco();//metodo get pega o valor
        double getArea();
        int getNumQuartos();
        double getPreco();

        void setEndereco(string endereco);
        void setArea(double area);
        void setNumQuartos(int numQuartos);//metodo set moifica o vaor
        void setPreco(double preco);
        
        void print();
        void fill();
        
};
