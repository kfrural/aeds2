#include <iostream>
#include <string>

using namespace std;

class Bicicleta{
    private:
        string marca;
        string modelo;
        int tamQuadro;
        double preco;

    public:
    Bicicleta();// construtor
    Bicicleta(Bicicleta &outra);

        string getMarca();//metodo get pega o valor
        string getModelo();
        int getTamQuadro();
        double getPreco();

        void setMarca(string marca);
        void setModelo(string modelo);
        void setTamQuadro(int tamQuadro);//metodo set moifica o vaor
        void setPreco(double preco);
        
        void print();
        void fill();
        void copiar(Bicicleta &outra);
        
};
