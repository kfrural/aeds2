#include <iostream>
#include <string>

using namespace std;

class AnimalEstimacao{
    private:
        string especie;
        string raca;
        int idade;
        double peso;

    public:
    AnimalEstimacao();// construtor
    AnimalEstimacao(AnimalEstimacao &outra);

        string getEspecie();//metodo get pega o valor
        string getRaca();
        int getIdade();
        double getPeso();

        void setEspecie(string especie);
        void setRaca(string raca);
        void setIdade(int idade);//metodo set moifica o vaor
        void setPeso(double peso);
        
        void print();
        void fill();
        void copiar(AnimalEstimacao &outra);
        
};
