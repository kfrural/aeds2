#include <iostream>
#include <string>
using namespace std;

class Smartphone{
    private:
        string marca;
        double tamTela;
        string SO;
        double preco;
    
    public:
        Smartphone();
        Smartphone(Smartphone &outra);
        
        string getMarca();
        double getTamTela();
        string getSO();
        double getPreco();
        
        void setMarca(string marca);
        void setTamTela(double tamTela);
        void setSO(string SO);
        void setPreco(double preco);
        
        void fill();
        void print();
        void copiar(Smartphone &outra);
};
